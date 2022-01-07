#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define fi first
#define se second

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	vector<int> v(n);
	int mx=0;
	int start=-1, end=-1;
	vector<pair<int,int>> dp(n+1);
	dp[0]={0,0};
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	/*
	9
	2 -5 4 -1 2 3 -5 2 -1
	*/
	for(int i=0; i<n; i++){
		int tnum = dp[i].fi+v[i];
		//Si la suma de la dp anterior mas el numero actual es mayor al numero actual:
		if(tnum>v[i]){
			dp[i+1].fi = tnum; //actualizo dp
			dp[i+1].se = dp[i].se; //el comienzo del subarray
			if(tnum > mx){
				mx = tnum; //saber el maximo
				start = dp[i].se; //actualizar el comienzo del subarray maximo
				end = i; //actualizar el final del subarray maximo
			}
		}
		// Si no es mayor me quedo con el numero actual
		else {
			dp[i+1].fi = v[i]; //actualizo dp
			dp[i+1].se = i; // reinicio el comienzo del subarray
		}
	}
//	for(auto x:dp){
//		cout<<x.first<<" ";
//	}
//	cout<<"\n";
	cout<<"Maxima suma en subarray: "<<mx<<" en el subarray ("<<start+1<<","<<end+1<<")\n";
}

