#include<bits/stdc++.h>
using namespace std;
struct pos{
	int x,y;
};
char matriz[1000][1000]; 
bool encuentre=false;	
queue<pos> cola;
pos a1;
int cant;
int a,b,exty,extx;

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
int main (){
	freopen("dfs.in","r",stdin);
	cin>>extx>>exty;
	cin>>a>>b;
	matriz[a][b]='V';
	a1.x=a;
	a1.y=b;
	cola.push(a1);
	cin>>cant;	
	pos posactual;
	for(int i=0; i<cant; i++){
		cin>>a>>b;
		matriz[a][b]='S';
	}
	while(!cola.empty() and !encuentre){
		posactual=cola.front();
		cola.pop();
		if(posactual.x>1){
			busqueda(posactual.x-1,posactual.y);
		}
		if(posactual.x<extx){
			busqueda(posactual.x+1,posactual.y);
		}
		if(posactual.y>1){
			busqueda(posactual.x,posactual.y-1);
		}
		if(posactual.y<exty){
			busqueda(posactual.x,posactual.y+1);
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
