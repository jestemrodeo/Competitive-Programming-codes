#include<bits/stdc++.h>
using namespace std;
struct caminos{
	int entrada, salida, tiempo;
};
struct obs{
	int ubicacion,tiempo;
};
struct parcial{
	int hasta, optimo;
};
int desvios(int cant, vector<caminos>caminovecinal, vector<obs> obstaculos){
	vector<parcial> recorrido;
	return recorrido.end().optimo;
}
int main(){
	freopen("desvios.in","r",stdin);
	int L;
	cin>>L;
	int cc; 
	cin>>cc;
	vector<caminos> caminovec(cc);
	for(int i=0; i<cc; i++){
		cin>>caminovec[i].entrada>>caminovec[i].salida>>caminovec[i].tiempo;
	}
	int co;
	cin>>co;
	vector<obs> obstaculos(co);
	for(int i=0; i<co; i++){
		cin>>obstaculos[i].ubicacion>>obstaculos[i].tiempo;
	}
	cout<<"la carretera de "<<L<<" se recorre en tiempo "<<desvios(L,caminovec,obstaculos)<<endl;
	fclose(stdin);
	return 0;
}
