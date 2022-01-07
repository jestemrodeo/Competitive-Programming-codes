#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int uf[1000001];

int _find(int x){
	int ret = uf[x]<0 ? x : _find(uf[x]);
	if(ret==x) return x;
	else{
		uf[x]=ret;
		return ret;
	}
}

void _union(int x, int y){
	x=_find(x);
	y=_find(y);
	if(x!=y){
		if(uf[x]>uf[y]) swap(x,y);
		uf[x]= min(uf[y]-1, uf[x]);
		uf[y]=x;
	}
}

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	freopen("conexiones.in", "r",stdin);
	memset(uf,-1,sizeof(uf));
	char a; cin>>a;
	while(a!='F'){
		if(a=='P'){
			int c1,c2; cin>>c1>>c2;
			if(_find(c1)==_find(c2)){
				cout<<"S\n";
			}
			else{
				cout<<"N\n";
			}
		}
		else{
			int c1,c2; cin>>c1>>c2;
			_union(c1,c2);
		}
		cin>>a;
	}
}

