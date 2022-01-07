#include <vector>
#include <algorithm>

using namespace std;

bool feria[5000];
int mayor, menor;
int costoMenor;

int toldos(vector<int> feriantes, vector<int> costos)
{
    int F = feriantes.size();
    int P = costos.size();
    costoMenor=10100;
    for(int i=0; i<F; i++){
        feria[feriantes[i]]=true;
        if(feriantes[i]<menor){
            menor=feriantes[i];
        }else if(feriantes[i]>mayor){
            mayor=feriantes[i];
        }
    }
    int costo=problema(feria, menor, mayor);

    return costo;
}

int problema(int lugar[], int minimo, int maximo){
    int costo=0;
    for(int i=maximo; i>minimo; i--){
        if(costo<costoMenor){
            costo+=problema(lugar, i, maximo);
        }
    }

    return costo;
}
