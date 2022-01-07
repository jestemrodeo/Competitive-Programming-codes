#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("carrera.in","r",stdin);
	int cant, mdif, mdifneutral,cuadrasdis;
	cin>>cant>>mdif>>mdifneutral;
	for(int i=0; i<cant; i++){
		int a,b,cuadra;
		cin>>a>>b>>cuadra;
		if(abs(a-b)<=mdif and cuadra-(a+b)<=mdifneutral){
			cuadrasdis++;
		}
	}
	cout<<cuadrasdis<<endl;
	fclose(stdin);
	return 0;
}
