#include <iostream>
using namespace std;

int cont=0, cant;

void saltar (int distancia, int salto){
	distancia-=salto;
	if(distancia==0){
		cont++;
	}
	else{
		for(int i=1; i<=cant; i++){
			if (distancia-i<0){
				break;
			}
			else{
				saltar(distancia,i);
			}
		}
	}
}

int main(){
	int distancia;
	cin>>cant>>distancia;
	for(int i=1; i<=cant; i++){
		if (distancia-i<0){
			break;
		}
		else{
			saltar(distancia,i);
		}
	}
	cout<<cont<<endl;
	return 0;
}
