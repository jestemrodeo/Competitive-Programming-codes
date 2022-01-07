#include <vector>
#include <string>

using namespace std;


int Dx[4]={0,1,0,-1},Dy[4]={-1,0,1,0};

int Encontrar(int i, int j,vector<vector<int> > &barrio,int M,vector<vector<int> > &Maximos){

    int Resultados[4]={0,0,0,0},cont=0;

    for(int k=0; k<4; k++){
        if(i+Dx[k]<M && i+Dx[k]>-1 && j+Dy[k]<M && j+Dx[k]>1){
        if (barrio[i][j]>barrio[i+Dx[k]][j+Dy[k]]){
            Resultados[k] = Encontrar(i+Dx[k],j+Dy[k],barrio,M,Maximos);
            cont++;
        }
        }
    }

    if(cont==0){
        return 0;
    } else {
        return max(Resultados[3],max(Resultados[2],max(Resultados[0],Resultados[1])))+1;
    }
}


int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{

    int M = barrio.size(),R;

    vector<vector<int> > Maximos;
    Maximos=barrio;

    R=Encontrar(0,1,barrio,M,Maximos);

    pista = vector<vector<int> >(2, vector<int>(2));

    pista[0][0] = 0;
    pista[0][1] = 1;

    pista[1][0] = 2;
    pista[1][1] = 3;

    recorrido = "OOO";

    return R;
}
