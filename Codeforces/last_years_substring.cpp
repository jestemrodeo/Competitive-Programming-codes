#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#define DBG(x) cerr<< #x <<": "<< (x) << "\n"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string s; cin>>s;
		if(s.substr(s.size()-2,2)  == "20" && s.substr(0,2) == "20"){
			cout<<"YES\n";
		}
		else if(s.substr(0,4)=="2020"){
			cout<<"YES\n";
		}
		else if(s.substr(s.size()-4,4) == "2020"){
			cout<<"YES\n";
		}
		else if(s.substr(0,1) == "2" && s.substr(s.size()-3,3) == "020"){
			cout<<"YES\n";
		}
		else if(s.substr(0,3) == "202" && s.substr(s.size()-1,1) == "0"){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}

