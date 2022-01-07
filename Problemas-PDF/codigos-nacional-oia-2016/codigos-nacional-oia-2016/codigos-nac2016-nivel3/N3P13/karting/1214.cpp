#include <vector>
#include <string>


using namespace std;


int Encontrar(int i, int j,vector<vector<int> > barrio,int M){

    int Resultados[4],cont=0,maximo=-1,indice=-1;
    Resultados[0]=0;
    Resultados[1]=0;
    Resultados[2]=0;
    Resultados[3]=0;



	if(((i+1)<M) && barrio[i][j]>(barrio[i+1][j+0]) ){
	if(Maximos[i+1][j]==-1)
	Maximos[i+1][j]=Encontrar(i+1,j,barrio,M);
	Resultados[0] = Maximos[i+1][j];

            cont++;}
	if(((i-1)>-1) && barrio[i][j]>(barrio[i-1][j+0]) ){
	if(Maximos[i-1][j]==-1)
	Maximos[i-1][j]=Encontrar(i-1,j,barrio,M);
	Resultados[1] = Maximos[i-1][j];
            cont++;}
	if((j+1<M) && barrio[i][j]>(barrio[i+0][j+1]) ){
	if(Maximos[i][j+1]==-1)
	Maximos[i][j+1]=Encontrar(i,j+1,barrio,M);
	Resultados[2] = Maximos[i][j+1];

            cont++;}
	if(((j-1)>-1) && barrio[i][j]>(barrio[i+0][j-1]) ){
	if(Maximos[i][j-1]==-1)
	Maximos[i][j-1]= Encontrar(i,j-1,barrio,M);
	Resultados[3] = Maximos[i][j-1];
            cont++;}


    if(cont==0){
        return 0;
    } else {
       for(int l=0; l<4; l++){
        if(Resultados[l]>maximo){
            maximo=Resultados[l];
            indice=l;
        }
        return maximo+1;
       }


    }
}


int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{

    int M = barrio.size(),R;


    R=Encontrar(1,0,barrio,M);


    pista = vector<vector<int> >(2, vector<int>(2));



    pista[0][0] = barrio[1][0];
    pista[0][1] = barrio[0][0];

    pista[1][0] = barrio[2][0];
    pista[1][1] = barrio[1][1];

    recorrido = "OOO";

    return R;
}
