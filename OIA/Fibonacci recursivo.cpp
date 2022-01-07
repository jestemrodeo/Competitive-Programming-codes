#include<bits/stdc++.h>
using namespace std;
vector<int>memo(99999999,-1);
int fibonacci(int n){
	if (memo[n]!=-1){
		return memo[n];
	}
	else{
		memo[n]=fibonacci(n-1)+fibonacci(n-2);
		return memo[n];
	}
}
int main (){
	int cant,n;
	memo[0]=0;
	memo[1]=1;
	memo[2]=1;
	cin>>cant;
	for(int i =0; i<cant; i++){
		cin>>n;
		cout<<fibonacci(n)<<endl;
	}
}
