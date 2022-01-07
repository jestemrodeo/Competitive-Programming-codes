#include<bits/stdc++.h>
using namespace std;
ifstream ent;
ofstream sal;
int main () {
   ent.open("almacenamiento.in");
   sal.open("almacenamiento3.out");
   int C,mb,q=0;
   ent>>C;
   int A[C];
   ent>>mb;
   for(int i=1;i<=C;i++){
   ent>>A[i];
   while(A[i]!=0){
	if(A[i]%2==0){
	mb=mb-A[i];
	q++;	
	}
	if(mb==0){
	mb=true;
   }	   
   }
   } 
   sal<<q<<endl;
   ent.close();
   sal.close();
}
