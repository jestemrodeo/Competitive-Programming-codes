#include<bits/stdc++.h>
using namespace std;
ifstream ent;
ofstream sal;
int main () {
   ent.open("almacenamiento.in");
   sal.open("almacenamiento.out");
   int C,mb,q=1;
   ent>>C;
   int A[C],may=0;
   ent>>mb;
   for(int i=1;i<=C;i++){
   ent>>A[i];
   if(mb==0){
   q=true;   
   } 
   if(A[i]>may){
   may=A[i];
   q++;
   mb=may-mb;
   }
   
   }
   sal<<q<<endl;
   ent.close();
   sal.close();
}
