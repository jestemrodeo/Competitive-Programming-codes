#include<bits/stdc++.h>
using namespace std;
int main(){
	int cant;
	cin>>cant;
	vector<int> a(cant);
	for(int i=0; i<cant; i++){
		cin>>a[i];
	}
	int max=0,rep=0;
	for(int i=0; i<cant; i++){
		if(a[i]>max){
			max=a[i];
			rep=1;
		}
		else if(a[i]==max){
			rep++;
		}
	}
	cout<<rep<<endl;
	return 0;
}
