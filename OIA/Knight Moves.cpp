#include<bits/stdc++.h>
using namespace std;
struct pos{
	int x,y;
};
char matriz[1000][1000]; 
bool encuentre=false;	
queue<pos> cola;
void busqueda (int f,int g){
	if (matriz[f][g]!='V'){
		if(matriz[f][g]=='S'){
			cout<<f<<" "<<g<<endl;
			encuentre=true;
		}
		else{
			matriz[f][g]='V';
			a1.x=f;
			a1.y=g;
			cola.push(a1);
		}
	}
}
