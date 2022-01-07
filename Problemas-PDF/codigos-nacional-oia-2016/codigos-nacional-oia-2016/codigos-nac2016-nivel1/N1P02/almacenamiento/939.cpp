#include<bits/stdc++.h>
using namespace std;
ifstream ent;
ofstream sal;
int main () {
   ent.open("almacenamiento.in");
   sal.open("almacenamiento.out");
   int C,mb,q=1;
   ent>>C;
   int A,may=C;
   ent>>mb;
   for(int i=1;i<=C;i++){
   ent>>A;
   if(mb==0){
   q=true;   
   }
   if(A>may){
   may=A;
   q++;
   mb=may-mb;
   }
   }
   sal<<q<<endl;
   ent.close();
   sal.close();
}
