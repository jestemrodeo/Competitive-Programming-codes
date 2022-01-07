#include<bits/stdc++.h>
using namespace std;
int cant;
int main(){
	freopen("maxinum.in","r",stdin);
	cin>>cant;
	vector<int> v(cant);
	for(int i=0; i<cant; i++){
		cin>>v[i];
	}
	vector<vector<int>> la[cant];
	for(int i=2; i<-2; i++){
		la[i].push_back(v[i-2]);
		la[i].push_back(v[i+2]);
	}
	for(int i=0; i<cant; i++){
		cout<<la[i]
	}
	fclose(stdout);
	return 0;
	}
