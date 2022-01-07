#include<bits/stdc++.h>
using namespace std;
int main(){
	string p;
	cin>>p;
	for(int i=0; i<=p.length()+1; i++){
		cout<<'*';
	}
	cout<<endl;
	cout<<'*'<<p<<'*'<<endl;
	for(int i=0; i<=p.length()+1; i++){
		cout<<'*';
	}
	return 0;
}
