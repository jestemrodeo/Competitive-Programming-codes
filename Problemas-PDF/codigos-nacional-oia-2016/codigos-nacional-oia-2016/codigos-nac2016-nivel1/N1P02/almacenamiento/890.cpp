#include<bits/stdc++.h>
using namespace std;
ifstream ent;
ofstream sal;
int main () {
   ent.open("almacenamiento.in");
   sal.open("almacenamiento.out");
   int C,mb,q=1;
   ent>>C;
   int A[C],may=C;
   ent>>mb;
   for(int i=1;i<=C;i++){
   ent>>A[i];
   if(A[i]>may){
   may=A[i];
   mb=may-mb;
   q++;
   }
   else if(mb==0){
	q=true;   
   } 
   }
   sal<<q<<endl;
   ent.close();
   sal.close();
}
