#include<bits/stdc++.h>
using namespace std;
ifstream ent;
ofstream sal;
int main () {
   ent.open("almacenamiento.in");
   sal.open("almacenamiento.out");
   int C,mb,q,r;
   ent>>C;
   int A[C];
   ent>>mb;
   r=mb/2;
   for(int i=0;i<=C;i++){
   ent>>A[i];
   if(A[i]>=r){
   q++;
   }
   } 
   sal<<q<<endl;
   ent.close();
   sal.close();
}
