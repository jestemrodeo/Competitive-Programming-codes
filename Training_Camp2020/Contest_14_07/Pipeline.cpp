#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n;
	int k;
	cin>>n>>k;
	vector<long long> puede(k+1);
	puede[0]=-1;
	puede[1]=-1;
	puede[2]= 2;
	for(int i=3; i<=k; i++){
		puede[i]= (i+puede[i-1])-1;
	}
	//cout<<puede[5]<<"\n";
	int c = 0;
	if(n==k){
		cout<<1<<"\n";
	}
	else if(n<k){
		cout<<1<<"\n";
	}
	else if(puede[k]>=n){
		while(n>=1){
			n-=(k-1);
			c++;
		}
		cout<<c<<"\n";
	}
	else{
		cout<<-1<<"\n";
	}
}