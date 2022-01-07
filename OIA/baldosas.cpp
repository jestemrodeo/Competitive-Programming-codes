#include<iostream>

using namespace std;


int main(){
    freopen("baldosas.in","r",stdin);
    freopen("baldosas.out","w",stdout);
    
    string camino; cin>>camino;
    
    int cantRojo=((camino.length())/3);
    int cantVerde=((camino.length())/3);
    int cantAzul=((camino.length())/3);
    int primerBaldosa;

    for(int i=0; i<camino.length(); i++){
        if(camino[i]!='*'){
            if(camino[i]=='R'){
                cantRojo--;
            }
            else if(camino[i]=='V'){
                cantVerde--;
            }
            else{
                cantAzul--;
            }
            primerBaldosa=i;
        }
    }
    //cout<<"Rojas: "<<cantRojo<<endl<<"Verdes: "<<cantVerde<<endl<<"Azules: "<<cantAzul<<endl;
    //Va para adelante
    for(int i=primerBaldosa; i<camino.length()-1; i++){
        if(camino[i]=='R'){
            if(cantVerde>cantAzul){
                if(cantVerde>0){
                camino[i+1]='V';
                cantVerde--;
                }
                else{
                    camino[i+1]='A';
                    cantAzul--;
                }
            }
            else{
                if(cantAzul>0){
                    camino[i+1]='A';
                    cantAzul--;
                }
                else{
                    camino[i+1]='V';
                    cantVerde--;
                }
            } 
        }
        if(camino[i]=='V'){
            if(cantRojo>cantAzul){
                if(cantRojo>0){
                    camino[i+1]='R';
                    cantRojo--;
                }
                else{
                    camino[i+1]='A';
                    cantAzul--;
                }
            }
            else{
                if(cantAzul>0){
                    camino[i+1]='A';
                    cantAzul--;
                }
                else{
                    camino[i+1]='R';
                    cantRojo--;
                }
            }
        }
        if(camino[i]=='A'){
            if(cantVerde>cantRojo){
                if(cantVerde>0){
                    camino[i+1]='V';
                    cantVerde--;
                }
                else{
                    camino[i+1]='R';
                    cantRojo--;
                }
            }
            else{
                if(cantRojo>0){
                    camino[i+1]='R';
                    cantRojo--;
                }
                else{
                    camino[i+1]='V';
                    cantVerde--;
                }
            }
        }
    }
    //Va para atras
    for(int i=primerBaldosa; i>0; i--){
        if(camino[i]=='R'){
            if(cantVerde>cantAzul){
                if(cantVerde>0){
                camino[i-1]='V';
                cantVerde--;
                }
                else{
                    camino[i-1]='A';
                    cantAzul--;
                }
            }
            else{
                if(cantAzul>0){
                    camino[i-1]='A';
                    cantAzul--;
                }
                else{
                    camino[i-1]='V';
                    cantVerde--;
                }
            } 
        }
        if(camino[i]=='V'){
            if(cantRojo>cantAzul){
                if(cantRojo>0){
                    camino[i-1]='R';
                    cantRojo--;
                }
                else{
                    camino[i-1]='A';
                    cantAzul--;
                }
            }
            else{
                if(cantAzul>0){
                    camino[i-1]='A';
                    cantAzul--;
                }
                else{
                    camino[i-1]='R';
                    cantRojo--;
                }
            }
        }
        if(camino[i]=='A'){
            if(cantVerde>cantRojo){
                if(cantVerde>0){
                    camino[i-1]='V';
                    cantVerde--;
                }
                else{
                    camino[i-1]='R';
                    cantRojo--;
                }
            }
            else{
                if(cantRojo>0){
                    camino[i-1]='R';
                    cantRojo--;
                }
                else{
                    camino[i-1]='V';
                    cantVerde--;
                }
            }
        }
    }
    cout<<camino<<"\n";
    fclose(stdin);
    fclose(stdout);
}