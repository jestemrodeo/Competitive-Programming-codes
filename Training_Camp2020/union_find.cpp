#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int uf[10]; 
void initialize_uf(){
	for(int i=0; i<10; i++) uf[i]=-1;
}

int _find(int x){
	int ret = uf[x]<0 ? x : _find(uf[x]);
	if (ret==x) return x;
	else {
		uf[x] = ret;
		return ret;
	}
}

bool _union(int x,int y){
	x = _find(x);
	y = _find(y);
	if(x==y) return false;
	if(uf[x] > uf[y]) 	swap(x,y);		//Esta linea sirve para que siempre x sea mayor
	uf[x]= min(uf[y]-1, uf[x]);		//Que y pero no entiendo como eso puede pasar.
	uf[y]=x;
	return true;
}

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	initialize_uf();
	for(int i=0; i<7; i++){
		int a, b; cin>>a>>b;
		if(_union(a,b)) cout<<"Great! "<<a<<" have a union with "<<b<<"\n";
		else cout<<"Sorry, they already have a connection...\n";
	}
	cout<<"-----------------------------\n";
	int a;
	cin>>a; cout<<"Representante de "<<a<<" es: "<<_find(a);
	for(int i=1; i<8; i++){
		cout<<i<<": "<<uf[i]<<"\n";
	}
}


