#include <string>
#include <iostream>
#include <queue>
#include <cmath>
#include <string.h>
using namespace std;

string encriptado(int clave, int N, string texto)
{
    queue<int> shift;
    int dig = floor(log10(clave))+1;
    int digf=dig;
    if(digf<N){
        while(digf<N){
            shift.push(0);
            digf++;
        }
    }
    float coso=0.0;
    for(int i=0;i<dig;i++){
        if(i==0){
            coso = clave/pow(10,dig-i);
        }
        float coson = coso;
        for(int j = 0; j<i ; j++){
            coson*=10;
            floor(coson);
        }
        shift.push(floor(clave/pow(10,dig-i-1)) - floor(coson)*10);
    }
    if(dig>N){
        while(digf>N){
            shift.pop();
            digf--;
        }
    }
    for(int i = 0; texto[i]; i++){
        int cambio = shift.front();
        if(texto[i]>='A' && texto[i]<='z'){
            shift.pop();
            if(texto[i]>='a'&&texto[i]<='z'){
                if(texto[i]+cambio<='z'){
                    texto[i]+=cambio;
                    texto[i]=toupper(texto[i]);
                }else{
                    texto[i]=toupper(texto[i]-('z'-'a')+cambio-1);
                }
            }else{
                if(texto[i]+cambio<='Z'){
                    texto[i]+=cambio;
                }else{
                    texto[i]=texto[i]-('Z'-'A')+cambio-1;
                }
            }
            shift.push(cambio);
        }else{
            for(int x = i; texto[x]; x++){
                texto[x]=texto[x+1];
            }
            i--;
        }
    }
    return texto;
}
