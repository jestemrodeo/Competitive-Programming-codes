#include<bits/stdc++.h>
using namespace std;
struct nn{
	int nodo;
	int nivel;
};
vector<int> arbol(1001);
int cant;
int unos;
vector<nn> m;
//estructura de nodos para saber el hijo de izq. y derecha.
void buscarizq(int padre){
	if(arbol[(padre-unos)*2+1]==-1){
		unos++;
		m.push_back(arbol[padre]);
		buscarder(padre);
	}
	else{
		
	}
}
void buscarder(int padre){
	if(arbol[(padre-unos)*2+2]==-1){
		unos++;
	}
	else{
		buscarizq
	}
}
int main(){
	unos=0;
	freopen("arbol.in","r",stdin);
	cin>>cant;
	int z;
	cin>>z;
	arbol.push_back(z);
	for(int i=0; i<cant; i++){
		int x,w;
		cin>>z>>x>w;
		arbol.push_back(x);
		arbol.push_back(w);
	}
	m.resize(cant);
	cargararbol(0);
	fclose(stdin);
	return 0;
}
