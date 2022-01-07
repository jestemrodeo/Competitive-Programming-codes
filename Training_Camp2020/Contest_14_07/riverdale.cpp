#include<cstdio>
#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, p;
	cin>>n>>p;
	string s;
	cin>>s;
	bool flag=false; 
	for(int i=0; i<s.size()-p; i++){
		if(s[i]!=s[i+p] and (s[i+p]!='.' or s[i]!='.') ){
			flag = true;
			break;
		}
	}
	if(flag){
		for(int i=0; i<s.size(); i++){
			if(s[i]=='.'){
				cout<<'0';
			}
			else{
				cout<<s[i];
			}
		}
		cout<<"\n";
	}
	else{
		cout<<"No\n";
	}
}