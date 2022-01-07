#include<bits/stdc++.h>
using namespace std;
string cifrado;
string letras;
int cant,clave[10];
int a,num;
int main(){
	freopen("encritado.in","r",stdin);
	cin>>cant;
	cin>>cifrado;
	for(int i=0; i<cant; i++){
		clave[i]=cifrado[i];
	}
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
	return 0;
}

