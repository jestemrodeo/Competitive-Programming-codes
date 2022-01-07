#include <string>
#include <bits/stdc++.h>

using namespace std;

string encriptado(int clave, int N, string texto)
{
	int largo;
	largo = texto.size();
	int largclav = 0;
	int i;
	int clavnew[9];
	for (i=0;i<9;i++)
		clavnew[i]=0;
	for (i=clave;i>0;i/=10) {
		clavnew[largclav]=i%10;
		largclav++;
	}
	string texnew;
	for (i = 0; i < largo; i++)
		if ( (texto[i] < ('Z' + 1)) && (texto[i] > ('A' - 1)) )
			texnew+=texto[i];
	int j;
	for (j = N-1;j < largo+N; j+=N) 
		for (i=0; i<N; i++)
			texnew[j-i] = (texnew[j-i]+clavnew[i]-'A')%26 + 'A';
	texto = texnew;
    return texto;
}
