#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("almacenamiento.in","r",stdin);
	freopen("almacenamiento.out","w",stdout);
	int cant;
	int requerido;
	cin>>cant>>requerido;
	int apps[cant];
	int optimo=9999999;
	for(int i=0; i<cant; i++){
		cin>>apps[i];
	}
	for(int i=0; i<cant; i++){
		int desinstalado=0;
		for(int j=0; j<cant; j++){
			desinstalado+=apps[j];
			if(desinstalado>=requerido){
				if(j<optimo){
				optimo=j;
				}
				break;
			}
		}
	}
	cout<<optimo<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
