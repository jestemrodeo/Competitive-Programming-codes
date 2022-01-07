#include <string>

using namespace std;

string desvela(string captado, string conocido)
{	

	//string cap=captado;
	int tama;
	tama=captado.size();
	//int tama2;
	//tama2=conocido.size();
	
	int ciclo1=0;
	int ciclo2=0;
	int fc1=0;
	int fc2=0;
	int a=0;
	char es=' ';


	for (int i=0;i<=tama+4;i++){
		if(conocido[a]==es){	
			a++;}
			ciclo1=captado[i]-conocido[a];
			a++;
		if(conocido[a]==es){	
			a++;}
			ciclo2=captado[i+1]-conocido[a];
			a++;
		//cout<<ciclo1<<" "<<ciclo2<<endl;
		if(conocido[a]==es){	
			a++;}
			if(captado[i+2]-conocido[a]==ciclo1){
				a++;
				if(conocido[a]==es){	
					a++;}
					if(captado[i+3]-conocido[a]==ciclo2){
						fc1=ciclo1;
						fc2=ciclo2;
						
		}
	}
	a=0;
	}
	
	if (fc1>=0 && fc2>=0){
		for (int u=0;u<=tama;u+=2){
			captado[u]=captado[u]-fc1;
			captado[u+1]=captado[u+1]-fc2;
		
		}
	}
	
	if (fc1<0 && fc2<0){
		for (int u=0;u<=tama;u+=2){
			captado[u]=captado[u]+fc1;
			captado[u+1]=captado[u+1]+fc2;
		
		}
	}
	
	if (fc1>=0 && fc2<0){
		for (int u=0;u<=tama;u+=2){
			captado[u]=captado[u]-fc1;
			captado[u+1]=captado[u+1]+fc2;
		
		}
	}
	
	if (fc1<0 && fc2>=0){
		for (int u=0;u<=tama;u+=2){
			captado[u]=captado[u]+fc1;
			captado[u+1]=captado[u+1]-fc2;
		
		}
	}
	
    return captado;
}
