#include<bits/stdc++.h>
using namespace std;
int main(){
	long long x = 1;
	int m=3;
	int n=5;
	for (int i = 2; i <= n; i++) {
			x = (x*i)%m;
	}
	cout << x%m << "\n";
	return 0;
}
