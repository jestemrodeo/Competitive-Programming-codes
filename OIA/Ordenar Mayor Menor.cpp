#include<bits/stdc++.h>
using namespace std;
int main(){
	int nums,cant;
	cout<<"cantidad: ";
	cin>>cant;
	vector <int> vector(cant);
	cout<<"numeros: ";
	for(int i=0; i<cant; i++){
		cin>>vector[i];
	}
	sort(vector.begin(),vector.end());
	for(int i=cant-1; i>=0; i--){
	cout<<vector[i]<<" ";
	}
	return 0;
}
