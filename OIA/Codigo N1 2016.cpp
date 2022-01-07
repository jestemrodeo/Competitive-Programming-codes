#include<bits/stdc++.h>
using namespace std;
string cifrado;
int cant,clave[10];
string letras;
int a,num;
int main(){
	freopen("codigoN12016.in","r",stdin);
	cin>>cant;
	cin>>cifrado;
	for(int i=0; i<cant; i++){
		clave[i]=cifrado[i];
	}
	cin>>a;
	while(cin>>letras){
		for(int i=0; i<letras.size(); i++){
			for(int j=0; j<=cant; j++){
				if(i==cant){
					i=0;
				}
				else{
					num=letras[i];
					num+clave[j];
					if(num>90){
						num-=26;
					}
					letras[i]=num;
					cout<<letras[i];
				}
			}
		}
	}
	fclose(stdin);
	return 0;
}
