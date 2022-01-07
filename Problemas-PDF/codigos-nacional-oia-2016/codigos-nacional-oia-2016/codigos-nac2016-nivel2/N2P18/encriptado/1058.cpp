#include <string>
#include <iostream>
using namespace std;

string encriptado(int clave, int N, string texto)
{
	int clave2[N];
	int este=clave;
	string texto2="";
	while(este>1*(10^N)){
		este=este/10;
		cout<<este<<endl;
		}
	for (int i=0;i<N;i++){
			clave2[i]=este%10;
			este=este/10;
	}
	int j=0,xd=texto.length();
	for(int i=0;i<xd;i++){
		if(texto[i]!=' '){
		if (j>N-1){
			j=0;
			
		}
		texto2+=texto[i]+clave2[j];
		cout<<clave2[j];
		j++;}
	}
	int we=texto2.length();
	for (int i=0;i<we;i++){
		if(texto2[i]>'Z'){
			texto2[i]=texto2[i]-'Z'+'A';
		}
	} 
    return texto2;
}
