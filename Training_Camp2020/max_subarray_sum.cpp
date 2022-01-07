#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<bool> v {0,0,0,0,1,1,1,0,1,0,1};
	vector<int> V (v.size()+1);
	V[0]=0;
	for(int i=1; i<V.size(); i++){
		V[i]=V[i-1]+v[i-1];
	}
	for(auto i : V){
		cout<<i<<" ";
	}
	cout<<"\n";
	for(int i=0; i<v.size(); i++){

	}
}