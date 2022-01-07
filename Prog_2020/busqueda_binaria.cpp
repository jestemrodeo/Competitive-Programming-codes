#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> m(n);
    int buscado;
    sort(m.begin() , m.end());
    int inicio = 0; 
    int fin = m.size()-1;
    bool encontro = false;
    while(!encontro or abs(inicio-fin)>1){
        int medio = (inicio+fin)/2;
        if(m[medio]==buscado){
            encontro=true;
        }
        else if(m[medio]>buscado){
            inicio=medio;
        }
        else{
            fin=medio;
        }
    }
    if(m[inicio]==buscado){
        encontro=true;
    }
    if(m[fin]==buscado){
        encontro=true;
    }
    if(encontro){
        cout<<"encontrado"<<endl;
    }
    else{
        cout<<"nop"<<endl;
    }
}