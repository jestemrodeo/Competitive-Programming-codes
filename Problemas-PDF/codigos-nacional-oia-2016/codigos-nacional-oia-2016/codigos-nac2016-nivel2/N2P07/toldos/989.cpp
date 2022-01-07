#include <vector>
#include <algorithm>

using namespace std;

bool feria[5000];
int mayor, menor;
int costoMenor;
int costo;

int problema(bool lugar[], int minimo, int maximo, vector<int> precio){
/*   int costo=0;
    for(int i=maximo; i>minimo; i--){
        if(costo<costoMenor){
            costo+=problema(lugar, maximo, i, precio);
        }
    }

    return costo+=precio[maximo-minimo];*/
}

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
    if((mayor-menor)*costos[0]<costos[mayor-menor]){
        return (mayor-menor)*costos[0];
    }
    else{
        return costos[mayor-menor];
    }
    //int costo=problema(feria, menor, mayor, costos);

    return costo;
}


