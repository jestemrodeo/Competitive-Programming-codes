#include<bits/stdc++.h>
using namespace std;
vector<int> alturas;
int izq_der[10000];
int der_izq[10000];
int cant, a,cont;
int largomax=0;
int mayor1=0,mayor2=0,mayortotal;
int main(){
	freopen("pista.in","r",stdin);
	cin>>cant;
	while(cin>>a){
		alturas.push_back(a);
	}
	izq_der[0]=0;
	der_izq[0]=0;
	for(int i=1; i<cant; i++){
		if(alturas[i]<alturas[i-1]){
			izq_der[i]=izq_der[i-1]+1;
		}
		else{
			izq_der[i]=0;
		}
	}
	for(int i=1; i<cant; i++){
		if(alturas[i]>alturas[i-1]){
			der_izq[i]=der_izq[i-1]+1;
		}
		else{
			der_izq[i]=0;
		}
	}
	for(int i=0; i<cant; i++){
		if(izq_der[i]>mayor1){
			mayor1=izq_der[i];
		}
	}
	for(int i=0; i<cant; i++){
		if(der_izq[i]>mayor2){
			mayor2=der_izq[i];
		}
	}
	if(mayor1>mayor2){
		mayortotal=mayor1;
	}
	else {
		mayortotal=mayor2;	
	}
	for(int i=0; i<cant; i++){
		if(izq_der[i]==mayortotal){
			largomax++;
		}
		if(der_izq[i]==mayortotal){
			largomax++;
		}
	}
	cout<<largomax<<" "<<mayortotal<<endl;
	for(int i=0; i<cant; i++){
		if(izq_der[i]==mayortotal){
			cout<<(i-mayortotal)+1<<" "<<i+1<<endl;
		}
		if(der_izq[i]==mayortotal){
			cout<<i+1<<" "<<(i-mayortotal)+1<<endl;
		}
	}
	fclose(stdin);
	return 0;
}
