#include<bits/stdc++.h>
using namespace std;
ifstream ent;
ofstream sal;
int main () {
   ent.open("almacenamiento.in");
   sal.open("almacenamiento.out");
   int C,mb,q,r;
   ent>>C;
   int A;
   ent>>mb;
   r=mb/2;
   for(int i=1;i<=C;i++){
   ent>>A;
   if(A>=r){
   q++;
   }
   } 
   sal<<q<<endl;
   ent.close();
   sal.close();
}
