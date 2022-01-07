#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("almacenamiento.in","r",stdin);
	freopen("almacenamiento.out","w",stdout);
	int cant;
	int requerido;
	cin>>cant>>requerido;
	int apps[cant];
	int optimo=999999999;
	for(int i=0; i<cant; i++){
		cin>>apps[i];
	}
	int temp;
	for(int i=0; i<cant; i++){
		int j=i;
		temp=0;
		int cont=0;
		while(temp<requerido){
			temp=temp+apps[j];
			cont++;
			j++;
		}
		if(cont<optimo){
			optimo=cont;
		}
	}
	cout<<optimo<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
