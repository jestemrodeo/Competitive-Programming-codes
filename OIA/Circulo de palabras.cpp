#include<bits/stdc++.h>
using namespace std;
struct datos{
	string p;
	bool visitado=false;
};
int cant;
bool posible=true;
int r[5010];
datos matriz[5010][2];
void comprobacion(datos matriz[5010][2]){
	for(int i=0; i<cant; i++){
		for(int j=0; j<cant; j++){
			if(matriz[i][0].p[matriz[i][0].p.length()-1]==matriz[j][0].p[0] && matriz[j][0].visitado==false && i!=j){
				matriz[i][1].p=matriz[j][0].p;
				r[i]=j;
				matriz[i][1].visitado=true;
			}
		}
		if(matriz[i][1].p==""){
			posible=false;
			break;
		}
	}
}
int main(){
	freopen ("palabras.in","r",stdin);
	cin>>cant;
	datos m[cant][2];
	for(int i=0; i<cant; i++){
		cin>>m[i][0].p;
	}
	comprobacion(m);
	if(posible){
		int c=0;
			for(int i=0; i<cant; i++){
				cout<<m[c][0].p<<endl;
				c=r[c];
			}
		}
	else{
		cout<<"No existe ordenamiento"<<endl;
	}
	return 0;
}
