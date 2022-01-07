#include <string>
#include <math.h>
#include <iostream>
#include <vector>
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
 a=K+'A'-1;
 if(a<'A')a='A';
 return a;
	
	
}
string encriptado(int clave, int N, string texto)
{ string Texto2;
  int L=texto.size();
  //cout<<" "<<endl;
  int P=0;
  vector <int> C;
   while(clave/Pot(10,P)>0&&P<N*2)
  {P++;
   C.push_back((clave/Pot(10,P))%10);
  
  }
  
 // cout<<P<<endl<<endl;
  
  for(int i=0;i<L;i++)
			{if(texto[i]!=' ')Texto2+=texto[i];
				//cout<<" "<<endl;
				}
 int impares=clave/Pot(10,N-1);
  int pares=clave%(Pot(10,N-1));
  for(int i=0;i+1<min(N,P/2);i++)
  {pares+=C[i]*Pot(10,i);
	  }
  for(int i=P/2;i-P/2<min(N,P/2);i++)
  {impares+=C[i]*Pot(10,i-P/2);}
  int cam[2]={impares,pares};
 // cout<<impares<<" "<<pares;			
  L=Texto2.size();
   for(int i=0;i<L;i++)
   {Texto2[i]=Cambiar(Texto2[i],cam[i%2]);}
   return Texto2;
   
}
