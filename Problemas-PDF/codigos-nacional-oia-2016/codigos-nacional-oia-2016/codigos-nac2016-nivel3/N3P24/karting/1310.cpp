#include <vector>
#include <iostream>

using namespace std;

struct punto{ int y; int x; int altura; };

punto mincontiguo(int x, int y, int M, vector<vector<int>> &barrio){
	punto minimo;
	minimo.altura = barrio[y][x];
	if(y+1<M){if(barrio[y+1][x]<minimo.altura){ minimo.altura=barrio[y+1][x]; minimo.y=y+1; minimo.x=x;}}
	if(x+1<M){if(barrio[y][x+1]<minimo.altura){ minimo.altura=barrio[y][x+1]; minimo.y=y; minimo.x=x+1;}}
	if(y-1>=0){if(barrio[y-1][x]<minimo.altura){ minimo.altura=barrio[y-1][x]; minimo.y=y-1; minimo.x=x;}}
	if(x-1>=0){if(barrio[y][x-1]<minimo.altura){ minimo.altura=barrio[y][x-1]; minimo.y=y; minimo.x=x-1;}}
	
	return minimo;
}


string recorrer(int x, int y, vector<vector<int>> &barrio, vector<vector<int>> &pista, int &largopista, int M){
	
	punto proximo = mincontiguo(x,y,M,barrio);
	vector<punto> recorridov;

	if(proximo.altura>1){
		recorridov.push_back(proximo);
		barrio[y][x]=1000000000;
		recorrer(proximo.x,proximo.y,barrio,pista,largopista,M);
	}else{
		pista[1][0] = proximo.x;
		pista[1][1] = proximo.y;
	
		
		char recorridoc[recorridov.size()];
		for(int point=0;point<recorridov.size();point++){
			if(recorridov[point].y<y) {recorridoc[point]='N';}
			if(recorridov[point].y>y) {recorridoc[point]='S';}
			if(recorridov[point].x<x) {recorridoc[point]='O';}
			if(recorridov[point].x>x) {recorridoc[point]='E';}
		}
		
		largopista = recorridov.size();
		
		return recorridoc;
	}
		
}
	

int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{
    int M = barrio.size();
    pista = vector<vector<int> >(2, vector<int>(2));
    pista[0][0] = 0;
    pista[0][1] = 1;
    pista[1][0] = 2;
    pista[1][1] = 3;
    recorrido = "OOO";
    
    punto max; max.altura=0;
    for(int y=0; y<M; y++){
		for(int x=0; x<M; x++){
			if(barrio[y][x]>max.altura){
				max.altura=barrio[y][x]; max.y=y; max.x=x;
			}else if(barrio[y][x]==max.altura){
				punto mincontiguob=mincontiguo(x,y,M,barrio);
				punto mincontiguomalt=mincontiguo(max.x,max.y,M,barrio);
				if(mincontiguob.altura<mincontiguomalt.altura){
					max.altura=barrio[y][x]; max.y=y; max.x=x;
				}
			}
		}		
	}
	pista[0][0] = max.y;
    pista[0][1] = max.x;
    
    int largopista;
	recorrido = recorrer(max.x,max.y,barrio,pista,largopista,M);
    
    return largopista;
}
