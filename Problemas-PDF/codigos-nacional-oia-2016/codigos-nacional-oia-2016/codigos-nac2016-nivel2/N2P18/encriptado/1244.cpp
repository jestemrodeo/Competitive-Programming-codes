#include <string>
using namespace std;

string encriptado(int clave, int N, string texto)
{
	int clave2[N];
	long int este=clave;
	string texto2="";
	while(este<(10^N)){
		este=este/10;
	}
	for (int i=1;i<=N;i++){
			clave2[N-i]=este%10;
			este=este/10;
	}
	int j=0
	long int xd=texto.length();
	for(int i=0;i<xd;i++){
		if(texto[i]!=' '){
		if (j>N-1){
			j=0;
			
		}
		texto2+=texto[i]+clave2[j];
		j++;}
	}
	long int we=texto2.length();
	for (int i=0;i<we;i++){
		if(texto2[i]>'Z'){
			texto2[i]=texto2[i]-26;
		}
	} 
    return texto2;
}
