#include<bits/stdc++.h>
using namespace std;
ifstream entra;
ofstream sale;
int main(){
	entra.open("almacenamiento.in");
	sale.open("almacenamiento.out");
	int cant;
	int requerido;
	entra>>cant>>requerido;
	int apps[cant];
	int optimo=999999999;
	for(int i=0; i<cant; i++){
		entra>>apps[i];
	}
	int j;
	for(int i=0; i<cant; i++){
		int desinstalado=0;
		for(j=i; j<cant; j++){
			desinstalado+=apps[j];
			if(desinstalado>=requerido){
				break;
			}
		}
		if(j<optimo){
			optimo=j;
		}
	}
	sale<<optimo<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
