#include<bits/stdc++.h>
using namespace std;
ifstream ent;
ofstream sal;
int main () {
   ent.open("almacenamiento.in");
   sal.open("almacenamiento2.out");
   int C,mb,q=0;
   ent>>C;
   int A[C];
   ent>>mb;
   for(int i=1;i<=C;i++){
   ent>>A[i];
   if(A[i]>=50){   
   q++;
   mb=mb-A[i];
   }
   } 
   sal<<q<<endl;
   ent.close();
   sal.close();
}
