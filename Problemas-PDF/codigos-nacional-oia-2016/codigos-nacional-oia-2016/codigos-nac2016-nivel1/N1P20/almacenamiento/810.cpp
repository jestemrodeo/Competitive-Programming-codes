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
	int desinstalado=0;
	for(int i=0; i<cant; i++){
		for(j=i; j<cant; j++){
			desinstalado+=apps[j];
			cout<<desinstalado<<endl;
			if(desinstalado>=requerido){
				if(j<optimo){
					optimo=j;
				}
				desinstalado=0;
				break;
			}
		}
	}
	if(optimo==0){
		optimo=1;
	}
	sale<<optimo<<endl;
	entra.close();
	sale.close();
	return 0;
}
