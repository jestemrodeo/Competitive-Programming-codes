#include <vector>
#include <string>
#include <time.h>


using namespace std;


int Dx[4]={0,1,0,-1},Dy[4]={-1,0,1,0};




int Encontrar(int i, int j,vector<vector<int> > &barrio,int M,vector<vector<int> > &Maximos){

    int Resultados[4],cont=0,maximo=-1;
    Resultados[0]=0;
    Resultados[1]=0;
    Resultados[2]=0;
    Resultados[3]=0;




    for(int l=0; l<4; l++){
        if(((j+Dx[l])<M) && ((j+Dx[l])>-1) && ((i+Dy[l])<M) && ((i+Dy[l])>-1)){

        if (barrio[i][j]>(barrio[i+Dy[l]][j+Dx[l]])){
            if(Maximos[i+Dy[l]][j+Dx[l]]==-1)
            Maximos[i+Dy[l]][j+Dx[l]]=Encontrar(i+Dx[l],j+Dy[l],barrio,M,Maximos);
            Resultados[l] =  Maximos[i+Dy[l]][j+Dx[l]];
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
        }

        return maximo+1;
       }


    }
}


int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{

    int M = barrio.size(),R;
    Dx[0]=0;
    Dx[1]=1;
    Dx[2]=0;
    Dx[3]=-1;

    Dy[0]=-1;
    Dy[1]=0;
    Dy[2]=1;
    Dy[3]=0;

    vector<vector<int> > Maximos;
    Maximos=barrio;
    for(int i=0; i<M; i++){
        for(int j=0; j<M; j++){
            Maximos[i][j]=-1;
        }
    }
    R=Encontrar(1,0,barrio,M,Maximos);


    pista = vector<vector<int> >(2, vector<int>(2));



    pista[0][0] = barrio[1][0];
    pista[0][1] = barrio[0][0];

    pista[1][0] = barrio[2][0];
    pista[1][1] = barrio[1][1];

    recorrido = "OOO";

    return rand()%10;
}
