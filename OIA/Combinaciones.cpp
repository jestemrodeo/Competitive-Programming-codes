#include<bits/stdc++.h>
using namespace std;

void multiplicar(int n[], int i){
	if(i<2){
		multiplicar(n, i+1);
	}
	cout<<n[i]*n[i+1]<<endl;
}

int main (){
	int numeros[]= {3, 5, 7, 11};
	multiplicar(numeros, 0);
}
