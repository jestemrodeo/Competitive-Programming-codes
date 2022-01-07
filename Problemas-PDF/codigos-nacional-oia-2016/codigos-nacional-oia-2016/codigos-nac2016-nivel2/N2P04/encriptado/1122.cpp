#include <string>
#include <bits/stdc++.h>
using namespace std;

string encriptado(int clave, int N, string texto)
{
    int sumos[9];
    double cl;
    int aux,l;
    cl=(double)clave;
    cl=(double)cl/pow(10,N);
    aux=(int)cl;
    cl=(double)cl-aux;
    for(int i=0;i<N;i++){
    int a;
        a=cl*pow(10,i+1);
    int b;
        b=cl*pow(10,i);
        b=b*10;
        sumos[i]=a-b;

    }
    l=0;
    char nt[3000000];
    for(int i=0;i<texto.length();i++){
    if(texto[i]!=' '){
        nt[l]=texto[i];
        l++;
    }
    }
    for(int i=0;i<l;i++){
    nt[i]=((nt[i]-'A'+sumos[i%N])%26)+'A';
    }

    return nt;
}
