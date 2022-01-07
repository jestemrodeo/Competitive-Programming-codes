#include <string>
#include <iostream>
 using namespace std;
 string desvela(string captado,string conocido){
    bool a=false;
    int aux;
    for(unsigned int i=0; i < captado.length(); i++){

        if(i!=0){
        aux= a - 3;
        captado[i]= (captado[i]<=65)? captado[i]+=25 : captado[i];   //((captado[i]>=87)? captado+=-25 : captado[i]);
        captado[i]+=aux;
        a = !a;}
        else{   captado[i]= (captado[i]<=65)? captado[i]+=25 : captado[i];
                captado[i]+=-1;
        }
    }
    return captado;
 }
