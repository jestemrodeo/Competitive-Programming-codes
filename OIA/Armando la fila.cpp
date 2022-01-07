#include <bits/stdc++.h>
using namespace std;
struct fechas{
	int dia, mes, anio;
};
struct e{
	int nivel, pos;
};
int fila(vector<fechas> orden, vector<int> &enojados){
	int cant=orden.size();
	vector<long int> fechas(cant);
	vector<e> enojos(cant);
	for(int i=0; i<cant; i++){
		fechas[i]=orden[i].anio*10000+orden[i].mes*100+orden[i].dia;
	}
	for(int i=0; i<cant; i++){
		cout<<fechas[i]<<endl;
	}
	cout<<"------"<<endl;
	for(int i=1; i<cant; i++){
		for(int j=i; j>=0; j--){
			if(fechas[i]<fechas[j]){
				enojos[i].nivel=i-j;
				enojos[i].pos=i;
			}
		}
	}
	for(int i=0; i<cant-1; i++){
		for(int j=i+1; j<=cant; j++){
			if(enojos[i].nivel<enojos[j].nivel){
				swap(enojos[i].nivel,enojos[j].nivel);
				swap(enojos[i].pos,enojos[j].pos);
			}
			else if(enojos[i].nivel==enojos[j].nivel){
				if(enojos[i].pos>enojos[j].pos){
				swap(enojos[i].nivel, enojos[j].nivel);
				swap(enojos[i].pos, enojos[j].pos);
				}
			}
		}
	}
	for(int i=0; i<cant; i++){
		cout<<enojos[i].pos+1<<" "<<enojos[i].nivel<<endl;
	}
	return 0;
}
int main(){
	freopen("armando_la_fila.in","r",stdin);
	int c;
	cin>>c;
	vector<fechas> v(c);
	for(int i=0; i<c; i++){
		cin>>v[i].dia>>v[i].mes>>v[i].anio;
	}
	vector<int> enojados;
	cout<<"La maxima intensidad de enojo es "<<fila(v, enojados)<<" y su orden:"<<endl;
/*	for(int i=0; i<cant; i++){
		if(i)
			cout<<" ";
		cout<<enojados[i];
	}*/
	fclose(stdin);
	return 0;
}
