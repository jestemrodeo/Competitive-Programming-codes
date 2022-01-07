#include <vector>
#include <string>


using namespace std;


int Dx[4]={0,1,0,-1},Dy[4]={-1,0,1,0};

int Encontrar(int i, int j,vector<vector<int> > &barrio,int M,vector<vector<int> > &Maximos){

    int Resultados[4],cont=0,maximo=-1,indice=-1;
    Resultados[0]=0;
    Resultados[1]=0;
    Resultados[2]=0;
    Resultados[3]=0;


    for(int k=0; k<4; k++){
        if(((j+Dx[k])<M) && ((j+Dx[k])>-1) && ((i+Dy[k])<M) && ((i+Dy[k])>-1)){
        if (barrio[i][j]>barrio[i+Dx[k]][j+Dy[k]]){
            Resultados[k] = Encontrar(i+Dx[k],j+Dy[k],barrio,M,Maximos);
            cont++;
        }
        }
    }

    if(cont==0){
        return 0;
    } else {
       for(int l=0; l<4; l++){
        if(Resultados[l]>maximo){
            maximo=Resultados[l];
            indice=i;
        }
       }


    }
}


int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{

    int M = barrio.size(),R;
    vector<vector<int> > Maximos;
    Maximos=barrio;
    R=Encontrar(1,0,barrio,M,Maximos);


    pista = vector<vector<int> >(2, vector<int>(2));



    pista[0][0] = barrio[1][0];
    pista[0][1] = barrio[0][0];

    pista[1][0] = barrio[2][0];
    pista[1][1] = barrio[1][1];

    recorrido = "OOO";

    return R;
}
