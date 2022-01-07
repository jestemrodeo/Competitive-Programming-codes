#include <string>

using namespace std;

string desvela(string captado, string conocido)
{	

	//string cap=captado;
	int tama;
	tama=captado.size();
	//int tama2;
	//tama2=conocido.size();
	
	int ciclo1;
	int ciclo2;
	int fc1;
	int fc2;
	
	for (int i=0;i<=tama;i++){
		ciclo1=captado[i]-conocido[i];
		ciclo2=captado[i+1]-conocido[i+1];
		if((ciclo1=captado[i+2]-conocido[i+2]==ciclo1) && (ciclo2=captado[i+3]-conocido[i+3]==ciclo2)){
			fc1=ciclo1;
			fc2=ciclo2;
		}

	}
	for (int u=0;u<=tama;u+=2){
		captado[u]=captado[u]+fc1;
	}
	for (int u=1;u<=tama;u+=2){
		captado[u]=captado[u]+fc2;
	}
	
    return captado;
}
