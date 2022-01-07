#include <iostream>
#include <cstring>

using namespace std;

int uf[1000001]; 
	
int _find(int x){
	int ret = uf[x]<0 ? x : _find(uf[x]);
	if (ret==x) return x;
	else {
		uf[x] = ret;
		return ret;
	}
}
void _union(int x,int y){
	x = _find(x);
	y = _find(y);
	if(x==y) return;
	if(uf[x] > uf[y]) 	swap(x,y);
	uf[x]= min(uf[y]-1, uf[x]);
	uf[y]=x;
}
int main() {
	freopen("red.in", "r", stdin);
	freopen("red.out","w",stdout);
	memset(uf,-1,sizeof(uf));
	char c;
	cin>>c;
	while(c != 'F'){
		int a,b; cin>>a>>b;
		if(c=='P'){
			if(_find(a)==_find(b)){
				cout<<"S\n";
			}
			else{
				cout<<"N\n";
			}
		}
		else if(c=='C'){
			_union(a,b);		}
		cin>>c;
	}
	fclose(stdin);
	fclose(stdout);
}

