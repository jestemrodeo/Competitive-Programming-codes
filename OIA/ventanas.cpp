#include <iostream>
#include <vector>
using namespace std;

int max_dias=0;

void ventanaDeslizante(vector<int>calendario,int d,int f){
	int abre_ventana=0,suma=0,cant_f=0;
	for(int i=0; i<d; i++){
		
		while(i<d && cant_f<f){
			if(calendario[der]==0){
				cant_f++;
				j++;
				suma++;
			}
			else{
				j++
				suma++;
			}
		}
		if(max_dias<suma){
			max_dias=suma;
		}
		if(calendario[izq]==0){
			
		}
		izq++;
		
	}
	
}
	int main(int argc, char *argv[]) {
		
		int n,d,f;
		cin>>n>>d>>f;
		vector<int>calendario(d,0);
		
		for(int i=0;i<n;i++){
			int s;
			cin>>s;
			calendario[s-1]=1;
		}
		
		
		ventanaDeslizante(calendario,d,f);
		cout<<max_dias;
		return 0;
	}
