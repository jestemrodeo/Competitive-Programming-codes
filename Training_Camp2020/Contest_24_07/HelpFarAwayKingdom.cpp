#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s; cin>>s;
	auto st = s.find('.');
	if(s[st-1]=='9'){
		cout<<"GOTO Vasilisa.\n";
	}
	else{
		if(s[st+1]<'5'){
			for(int i=0; i<st; i++){
				cout<<s[i];
			}
		}
		else{
			for(int i=0; i<st; i++){
				if(i==st-1){
					int a = s[i] +1;
					s[i] = (char)a;
					cout<<s[i];
				} else{
					cout<<s[i];
				}
			}
		}
		cout<<"\n";
	}
}

