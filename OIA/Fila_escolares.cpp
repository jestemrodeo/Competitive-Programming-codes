#include<bits/stdc++.h>
using namespace std;
ifstream entra;
ofstream sale;
double alumnos[11];
int main(){
	freopen("fila.in","r",stdin);
	freopen("fila.out","w",stdout);
	vector <double> vector(10);
	for(int i=0; i<10; i++){
		cin>>alumnos[i];
		vector[i]=alumnos[i];
	}
	double mayordif=0;;
	double mayor=0;
	double menor=99;
	double temp=0;
	double resta=0;
	for(int i=0; i<10; i++){
		if(alumnos[i]>mayor){
			mayor=alumnos[i];
		}
		if(alumnos[i]<menor){
			menor=alumnos[i];
		}
		temp+=alumnos[i];
	}
	for(int i=0; i<9; i++){
		resta=abs(alumnos[i]-alumnos[i+1]);
		if(resta>mayordif){
			mayordif=resta;
		}
	}
	double promedio=temp/10;
	sort(vector.begin(),vector.end());
	for(int i=10-1; i>=0; i--){
	cout<<vector[i]<<endl;
	}
	cout<<"Mas alto: "<<mayor<<endl;
	cout<<"Mas bajo: "<<menor<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	cout<<"Mayor Diferencia: "<<mayordif<<endl;	
	return 0;
}
