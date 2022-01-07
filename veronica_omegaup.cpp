#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s, d;
	getline(cin, s);
	d = s;
	reverse(d.begin(), d.end());
	int n = s.size();
	int entre = s.size()-1;
	int antes = 0;
	for(int i=0; i<n; i++){
		for(int a=0; a<antes; a++){
			cout<<" ";
		}
		cout<<s[i];
		for(int e=0; e<entre*2; e++){
			cout<<" ";
		}
		cout<<s[i]<<"\n";
		antes++;
		entre--;
	}
	
}

