#include <bits/stdc++.h>
using namespace std;
int main(){
freopen("pista.in", "r", stdin);
freopen("pista.out", "w", stdout);
int esquinas;
cin >> esquinas;
char altura[esquinas];
int inicio;
int fin;
int pista[1000];
int lista[1000];
int finalp;
 int pista1=0;
 int pista2=0;
 int pista3=0;
 int pista4=0;
 int pista5=0;
 int pista6=0;


 for(int i=0; i<esquinas; i++){


 cin >> altura;
 }
 for (int i=0; i<esquinas; i++){
  if(altura[i]>altura[i+1] or
    altura[i]>altura[i-1])
    {pista1=2;}else{
        if(altura[i+1]>altura[i+2] or
    altura[i+1]>altura[i])
    {pista2=3;}else{
    if(altura[i+2]>altura[i+3] or
    altura[i+2]>altura[i+1]){
    pista3=4;

    }else{
      if(altura[i+3]>altura[i+4] or
    altura[i+3]>altura[i+2]){pista4=5;}else{
     if(altura[i+4]>altura[i+5] or
    altura[i+4]>altura[i+3]){pista5=6;}
    }


















    }
    }}

}

//if de mayor a menor con else que imprima el largo

 int pistafinal=0;
 if (pista1!=0){pistafinal++;}
 if (pista2!=0 && pista1==0){pistafinal++;}
 if (pista3!=0 && pista2==0){pistafinal++;}
 if (pista4!=0 && pista3==0){ pistafinal++;}
 if (pista5!=0 && pista4==0){pistafinal++;}
 cout << pistafinal+1 << " ";
 if(pista5!=0){cout << pista5+1 << " " ;}else{if(pista4!=0){cout << pista4+1 << " ";}else{if(pista3!=0){cout << pista3+1 << " ";}else{if(pista2!=0){cout << pista2+1 << " ";}}}}
/*if (pista5!=0){cout << pista5;}else{
 if (pista4!=0 && pista5==0){cout << pista4;}else{
 if (pista3!=0 && pista4==0){cout << pista3;}else{
 if (pista2!=0 && pista3==0){ cout << pista2;}else{
 if (pista1!=0 && pista2==0){cout << pista1;}}}}
 }*/


//pista=2 pista2=3 pista3=4 pista4=5 pista5=6 pista6=7

















//}}
return 0;}
