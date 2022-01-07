#include <string>
#include <math.h>
#include <iostream>
using namespace std;
int Pot(int b, int e)
{int r=1;
	for(int i=0;i<e;i++)r*=b;
	return r;
}
char Cambiar(char a, int c)
{int K=a-'A'+1;
 K+=c;
 K=K%27;
 a=min('A',K+'A'-1);
 return a;
	
	
}
string encriptado(int clave, int N, string texto)
{ string Texto2;
  int L=texto.size();
  cout<<" "<<endl;
  
  for(int i=0;i<L;i++)
			{if(texto[i]!=' ')Texto2+=texto[i];
				//cout<<" "<<endl;
				}
 int impares=clave/Pot(10,N-1);
  int pares=clave%(Pot(10,N-1));
  int cam[2]={impares,pares};
  cout<<impares<<" "<<pares;			
  L=Texto2.size();
   for(int i=0;i<L;i++)
   {Texto2[i]=Cambiar(Texto2[i],cam[i%2]);}
   return Texto2;
   
}
