#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    long int a=0,b=0;
    a=v[0];
    b=v[n-1];
    int comidasA=0;
    int comidasB=0;
    int posAlice=0;
    int posBob=n-1;
    while(abs(posBob-posAlice)>0){
        if(b<a){
            posBob--;
            comidasB++;
            b+=v[posBob];
        }
        else{
            posAlice++;
            comidasA++;
            a+=v[posAlice];
        }
    }
    if(b<a){
        posBob--;
        comidasB++;
    }
    else{
        posAlice++;
        comidasA++;
    }
    cout<<comidasA<<" "<<comidasB<<"\n";
}