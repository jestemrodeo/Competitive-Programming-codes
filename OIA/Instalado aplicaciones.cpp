#include<bits/stdc++.h>
using namespace std;
vector<int> apps;
vector<int> distancias;
int cant, requerido, desinstalado, a,cont;
int main(){
	freopen("almacenamiento.in","r",stdin);
	cin>>cant>>requerido;
	while(cin>>a){
		apps.push_back(a);
	}
	for(int i=0; i<cant; i++){
		desinstalado=0;
		cont=1;
		for(int j=i; j<cant; j++){
			desinstalado+=apps[j];
			if(desinstalado>=requerido){
				distancias.push_back(cont);
				break;
			}
			cont++;
		}
	}
	sort(distancias.begin(),distancias.end());
	cout<<distancias[0]<<endl;
	fclose(stdin);
	return 0;
}
