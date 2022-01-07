#include <bits/stdc++.h>
using namespace std;

#define MAX 5000

int matriz[MAX][MAX] //Acá es donde guardas la información, tiene que ser del tipo de datos necesario.
bool visitado[MAX][MAX]; //Acá guardas las casillas visitadas;
queue< pair< pair<int,int>,int > > Q;

void bfs(){
	pair< pair<int,int>,int > act;
	int dx[4]={-1,1,0,0};
	int dy[4]={0,0,1,-1};
	int ady,nx,ny;                             //Donde vas a guardar tus adyacentes
	Q.push(make_pair(make_pair(0,0),0)); //La coordenada desde dónde queres buscar, por ejemplo x0 y0
	visitado[0][0];					 //Marcas como visitada la casilla inicial
	
	while(!Q.empty()){
		act=Q.front();
		Q.pop();
		
		visitado[act.first.first][act.first.second]=true;
		
		for(int i=0;i<4;i++){
			nx=act.first.first+dx[i];
			ny=act.first.first+dy[i];
			
			if(nx >= 0 && nx < N && ny >= 0 && ny < M && visitado[nx][ny]==false){
				Q.push_back(make_pair(make_pair(nx,ny),actsecond+1.));
			}
			
		}
	}
}
int main(){
	
}
