#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long INFINITO=999999999;

long determinarX(long x, long sentido){
    if(sentido==1||sentido==3)
        return x;
    else{
        if(sentido==2)
            return x+1;
        else
            return x-1;
    }
}

long determinarY(long y, long sentido){
    if(sentido==2||sentido==4)
        return y;
    else{
        if(sentido==1)
            return y-1;
        else
            return y+1;
    }
}

string orientacion(long sentido){
    switch(sentido){
        case 1:
            return "N";
        case 2:
            return "E";
        case 3:
            return "S";
        case 4:
            return "O";
    }
}

bool esDisponible(long  x, long y, long limite){
    if(x>-1&&x<limite){
        if(y>-1&&y<limite)
            return true;
    }
    return false;
}

void armarGrafo(vector < vector <long> > &grafo, vector < vector <long> > &distancia, vector < vector <long> > barrio, vector < vector <string> > &brujula){
    long vecinoX,vecinoY,vecinoActualX, vecinoActualY,peso,peso2;
    for(int c=0;c<barrio.size();c++){//COlumnas
        for(int c1=0;c1<barrio.size();c1++)//Filas
        {
            vecinoActualY=c;
            vecinoActualX=c1;
            for(int d=0;d<4;d++)//Tendra 4 vecinos
            {
                vecinoX=determinarX(vecinoActualX,d+1);
                vecinoY=determinarY(vecinoActualY,d+1);
                //cout<<vecinoY<<" "<<vecinoX<<endl;
                //cout<<esDisponible(vecinoX,vecinoY,barrio.size())<<endl;
                if(esDisponible(vecinoX,vecinoY,barrio.size())){
                    long nodo=c*barrio.size()+(c1+1);
                    //cout<<nodo<<endl;
                    string sentido= orientacion(d+1);
                    grafo[nodo-1].push_back(vecinoY*barrio.size()+(vecinoX+1));
                    peso=barrio[vecinoY][vecinoX];
                    peso2=barrio[vecinoActualY][vecinoActualX];
                    distancia[nodo-1].push_back(peso-peso2);
                    brujula[nodo-1].push_back(sentido);
                }
            }
        }
    }
}

long desencolar(vector <long> &cola){
    long auxiliar=cola[0];
    cola.erase(cola.begin()+0,cola.begin()+1);
    return auxiliar;
}

vector <long> recorridoP(vector <long> &nodoDistancia, vector <long> &padre, long fin){
    vector <long> camino;
    if(nodoDistancia[fin]==INFINITO)
    {
        camino.push_back(-2);
        camino.push_back(-2);
        return camino;
    }
    long actual=padre[fin];
    camino.push_back(actual);
    while(actual!=-1){
        camino.push_back(actual);
        actual=padre[actual-1];
    }
    reverse(camino.begin(),camino.end());
    return camino;
}

void BFS(vector < vector <long> > &grafo, vector < vector <long> > &distancia, long inicio, vector <long> &nodoDistancia, vector <long> &padre){
    nodoDistancia[inicio]=0;
    padre[inicio]=-1;
    vector <long> cola;
    cola.push_back(inicio);
    while(cola.size()>0){
        long actual=desencolar(cola);
        for(int c=0;c<grafo[actual].size();c++){
            long vecino=grafo[actual][c]-1;
            if(distancia[actual][c]<0){//Esta conectado
                //cout<<"Pase"
                nodoDistancia[vecino]=nodoDistancia[actual]+1;
                padre[vecino]=actual+1;
                cola.push_back(vecino);
            }
        }
    }
}

void caminoMasLargo(vector < vector <long> > &grafo, vector < vector <long> > &distancia, int s){
    //Maximo
    vector <long> nodoMaximo;
    //Auxiliar
    vector <long> nodoAuxiliar;

    vector <long> nodoDistancia(grafo.size(),INFINITO);
    vector <long> padre(grafo.size(),-1);

    BFS(grafo,distancia,0,nodoDistancia,padre);

    int maximo=nodoDistancia[0];
    nodoMaximo=recorridoP(nodoDistancia,padre,maximo-1);
    for(int c=0;c<nodoDistancia.size();c++){
        if(maximo<nodoDistancia[c]){
            maximo=nodoDistancia[c];
            nodoMaximo=recorridoP(nodoDistancia,padre,maximo-1);
        }
    }
    cout<<nodoMaximo.size()-1<<endl;
    for(int c1=0;c1<nodoMaximo.size();c1++)
    {
        int a=(nodoMaximo[c1]-1)/s;
        int b=(nodoMaximo[c1]-1)-s*a;
        cout<<a<<" "<<b<<" - ";
    }
    cout<<endl;
}

long karting(vector < vector <long> > barrio, vector < vector <long> > &pista, vector<string>  &recorrido){
    vector <vector <long> > grafo(barrio.size()*barrio.size());
    vector <vector <long> > distancia(barrio.size()*barrio.size());
    vector <vector <string> > brujula(barrio.size()*barrio.size());

    armarGrafo(grafo,distancia,barrio, brujula);
    /*for(int c=0;c<grafo.size();c++){
        for(int c1=0;c1<grafo[c].size();c1++){
            cout<<grafo[c][c1]<<" ";
        }
        cout<<endl;
    }*/

    caminoMasLargo(grafo,distancia,barrio.size());


    //caminoMasLargo(grafo,distancia,brujula);
    /*cout<<"\Distancia"<<endl;
    for(int c=0;c<grafo.size();c++){
        for(int c1=0;c1<grafo[c].size();c1++){
            cout<<distancia[c][c1]<<" ";
        }
        cout<<endl;
    }

    cout<<"\Orientacion"<<endl;
    for(int c=0;c<grafo.size();c++){
        for(int c1=0;c1<grafo[c].size();c1++){
            cout<<brujula[c][c1]<<" ";
        }
        cout<<endl;
    }*/
    //Longitud maxima para cada nodo
    /*vector < vector <long> > longitudMaxima(barrio.size());
    //

    vector < vector <long> > trayecto;

    //for(int c=0;c<)

    vector <long> auxiliar(2);
    auxiliar[0]=0;
    auxiliar[1]=0;
    trayecto.push_back(auxiliar);*/

    return 0;
}
