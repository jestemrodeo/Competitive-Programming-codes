#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int MOD = 1000000007;

long long binExp(long long a, int b){
	if(b==1){
		return a;
	}
	else if(b==0){
		return 1;
	}
	else {
		long long parcialRes = binExp(a, b/2);
		parcialRes = (parcialRes*parcialRes)%MOD;
		if(a%2==0){
			return parcialRes;
		}
		else{
			return (parcialRes*a)%MOD;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	for(int i=0; i<n; i++){
		cout<< binExp(a,b);
	}
}







