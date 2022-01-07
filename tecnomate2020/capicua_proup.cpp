#include <bits/stdc++.h>

using namespace std;
int main() {
	set<int> dp;
	
	for(int i=100; i<=999; i++) {
		for(int j=i; j<=999; j++){
			int aux = i*j;
			string s1 = to_string(aux);
			string s2 = s1; reverse(s2.begin(), s2.end());
			if(s1 == s2){
				dp.insert(aux);
			}
		}
	}
	
	int t; cin>>t;
	vector<int>n;
	
	for(int i=0; i<t; i++){
		int a;cin>>a;
		n.push_back(a);
	}
	
	for (auto num:n){
		auto it = dp.lower_bound(num);
		it--;
		cout<<*(it)<<"\n";
	}
}
