#include<bits/stdc++.h>
using namespace std;
ifstream ent;
ofstream sal;
int main () {
   ent.open("codigo.in");
   sal.open("codigo.out");
   int bas,Clave,lin;
  
   ent>>bas>>Clave;
   ent>>lin;
   string Texto[lin];
   ent>>Texto[lin];
   for(int i=0;i<=lin;i++)
   {
	   if(Texto.length(i)%2==0)
	   {
		Texto.lentgth(i)=Texto.lentgth(i)+2;   
       }
       else 
       {
		   Texto.length(i)=Texto.lentgth(i)+3;
	   }
	   sal<<Texto.length(i);
   }   
   ent.close();
   sal.close();
   return 0;
}
