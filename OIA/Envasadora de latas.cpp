#include<bits/stdc++.h>
using namespace std;
char letra;
int cont=0;
int cant=0;
int longitud=0;
int longitud2=0;
int final1=0,final2=0;
int distancia;
int main (){
	freopen ("latas.in","r",stdin);
	while(cin>>letra){
		cant++;
		if(letra=='G'){
			cont++;
		}
		else if(cont>longitud){
			longitud2=longitud;
			final1=final2;
			final2=cant;
			longitud=cont;
			cont=0;
		}
		else if(cont>longitud2){
			longitud2=cont;
			final1=cant;
			cont=0;
		}
		else{
			cont=0;
		}
	}
	cout<<cant<<endl;
	cout<<longitud<<endl;
	cout<<longitud2<<endl;
	distancia=abs((final2-longitud)-final1)+1;
	cout<<distancia<<endl;
	fclose(stdin);
    return 0;
}
