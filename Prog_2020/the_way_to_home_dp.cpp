#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, ms;
	cin>>n>>ms;
	string s;
	cin>>s;
	//  s = 1 0 0 1 0 1 0 1
	//      0 1 2 3 4 5 6 7
	// dp = x x x x 1 -1 x x 0
	//      0 1 2 3 4 5 6 7 8


	vector<int> dp(n+1,-1);
	dp[n]=0;
	for (int i = n; i > 0; i--){
		if(s[i-1]=='1'){
			for(int j = max(1, i-ms); j<i; j++){
				if(s[j-1] == '1'){
					if(dp[j]==-1){
						dp[j] = dp[i]+1;
					}
					cout<<dp[j]<<" ";
				}
			}
		}
		cout<<endl;
	}
	cout<<"dp: \n";
	for(auto x : dp){
		cout<<x<<" ";
	}
	cout<<endl;
	cout<<dp[1];
}