#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
#include <cstring>
#include <queue>
using namespace std;

int mayor = 0;

int tam;

int largo[3300][3300];

vector<vector<int> > barrio;

void llegue(){
    cout<<"llegue "<<endl;
}

void llegue(int i){
    cout<<"llegue "<<i<<endl;
}

void init(){
    for(int i=0;i<3100;i++){
    for(int j=0;j<3100;j++){
        largo[i][j]=-1;
    }
    }
}

int check(int col,int fila){
    if(col<0 || col>=tam || fila<0 || fila>=tam){
        return -1;
    }
    if(largo[col][fila]!=-1){
        return largo[col][fila];
    }
    int maxLar=0;

    if(col>0 && barrio[col-1][fila]<barrio[col][fila]){
        int l = check(col-1,fila);
        if(l>maxLar){
            maxLar = l;
        }
    }
    if(col<tam-1 && barrio[col+1][fila]<barrio[col][fila]){
        int l = check(col+1,fila);
        if(l>maxLar){
            maxLar = l;
        }
    }
    if(fila>0 && barrio[col][fila-1]<barrio[col][fila]){
        int l = check(col,fila-1);
        if(l>maxLar){
            maxLar = l;
        }
    }
    if(fila<tam-1 && barrio[col][fila+1]<barrio[col][fila]){
        int l = check(col,fila+1);
        if(l>maxLar){
            maxLar = l;
        }
    }
    //if(maxLar!=0)
    maxLar++;
    largo[col][fila]=maxLar;
    if(maxLar>mayor){
        mayor=maxLar;
    }
    //cout<<maxLar<<endl;
    return maxLar;
}

string rec(col,fila){
;
    return "";
}

int karting(vector<vector<int> > barr, vector<vector<int> > &pista, string &recorrido)
{
    barrio = barr;
    tam = barrio.size();
    pista = vector<vector<int> >(2, vector<int>(2));
    init();

    for(int i=0;i<tam;i++){
    for(int j=0;j<tam;j++){
        check(i,j);
    }
    }

    int bi,bj;

    for(int i=0;i<tam;i++){
    for(int j=0;j<tam;j++){
        if(largo[i][j]==mayor){
            bi=i;
            bj=j;
        }
    }
    }

    rec(bi,bj);

    pista[0][0] = bi;
    pista[0][1] = bj;

    pista[1][0] = 2;
    pista[1][1] = 3;

    recorrido = "OOO";

    return mayor-1;
}
