#include<bits/stdc++.h>
using namespace std;
ifstream ent;
ofstream sal;
int main () {
   ent.open("almacenamiento.in");
   sal.open("almacenamiento.out");
   int C,mb,q=1;
   ent>>C;
   ent>>mb;
   int A[C], may=C ;
   for(int i=1;i<=C;i++)
   {
   ent>>A[i];
   q++;
   mb=mb-may;
   if(mb==0)
   {
   q=true;   
   }
   }
   sal<<q<<endl;
   ent.close();
   sal.close();
  return 0;
}
