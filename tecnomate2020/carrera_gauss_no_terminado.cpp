#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	string s; cin>>s;
	vector<int> dp(n+1);
	dp[0] = 0;
	for(int i=0; i<n; i++){
		int x = s[i] - '0';
		dp [i+1] = dp[i] + x;
	}
	int c=0;
	for(int i=0; i<n; i++){
		for(int j=1; j<n; j++){
			if(abs(j-i) == dp[j]-dp[i]){
				c++;
			}
		}
	}
	cout<<c<<"\n";
}

