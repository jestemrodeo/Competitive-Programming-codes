#include<bits/stdc++.h>
using namespace std;
ifstream ent;
ofstream sal;
int main () {
   ent.open("almacenamiento.in");
   sal.open("almacenamiento.out");
   int C,mb,q;
   ent>>C;
   int A;
   ent>>mb;
   for(int i=0;i<=C;i++){
   ent>>A;
   if(A<=mb){   
   q++;
   }
   } 
   sal<<q<<endl;
   ent.close();
   sal.close();
}
