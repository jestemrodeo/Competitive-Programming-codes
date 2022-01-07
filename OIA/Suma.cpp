#include<bits/stdc++.h>
using namespace std;
int x,y;
int sumar (int a, int b){
	return a+b;
}
int main(){
	cout<<"ingrese dos numeros separados por un espacio, a continuacion aprete enter."<<endl;
	cin>>x>>y;
	cout<<"El resultado es: ";
	cout<<sumar(x,y)<<endl;
	return 0;
}
