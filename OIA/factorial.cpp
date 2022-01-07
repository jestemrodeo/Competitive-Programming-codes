#include<bits/stdc++.h>
using namespace std;
vector <int> resultados;
int factorial(int n){
	if (n==0 || n==1){
		cout<<" aaa"<<endl;
		return 1;
	}
	if (resultados[n]!=0){
		cout<<" bbbb"<<endl;
		return resultados[n];
	}
	else {
		cout<<" ccccc"<<endl;
		resultados[n]=factorial(n-1)*n;
	}
}
int main(){
	freopen("dinamica1.in","r",stdin);
	int a,b,c;
	cin>>c;
	resultados.resize(c+1);
	while(cin>>a){
		cout<<a<<"!= "<<factorial(a)<<endl;	
	}
	return 0;
}
