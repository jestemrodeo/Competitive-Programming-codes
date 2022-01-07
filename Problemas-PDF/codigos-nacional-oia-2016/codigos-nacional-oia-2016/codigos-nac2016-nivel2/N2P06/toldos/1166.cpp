#include <vector>

using namespace std;

int toldos(vector<int> feriantes, vector<int> costos)
{
    int F = feriantes.size();
    int P = costos.size();
    int contador=0;
    int momento=0;
    int resta=0;
    int v[F]={0};
    int posicion[P]={0};
    for (int i=0;i<P;i++){
        for (int j=0;j<F;j++){
            posicion[feriantes[j]-1]=1;
        }
    }
    for (int i=0;i<P-1;i++){
        int j=1;
        if (posicion[i]+posicion[i+1]!=0){
            contador=contador+1;
        }else{
            v[j]=contador;
            j=j+1;
            contador=0;
        }
    }
    v[0]=contador;
    for (int i=0;i<F;i++) momento=momento+v[i];
    for (int i=0;i<F;i++){
            if (v[i]!=0)    resta=resta+costos[v[i]-1];
        }
    if (resta<costos[momento]){
        return resta;
    }else{
        return costos[momento];
    }
}
