#include <string>
#include <iostream>
 using namespace std;
 string desvela(string captado,string conocido){
    bool a=true;
    int aux;
    for(unsigned int i=0; i < captado.length(); i++){
        aux= a - 3;
        captado[i]= (captado[i]<=65)? captado[i]+=25 : captado[i];   //((captado[i]>=87)? captado+=-25 : captado[i]);
        captado[i]+=aux;
        a = !a;
    }
    return captado;
 }
