#include<cstdio>
#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x,y,canMov;
	cin>>x>>y>>canMov;
	int varda = abs(x+y);
	if(varda > canMov){
		cout<<"No\n";
	}
	else if(varda==canMov){
		cout<<"Yes\n";
	}
	else if(varda<canMov and varda%2==0 and canMov%2==0){
		cout<<"Yes\n";
	}
	else if(varda<canMov and varda%2!=0 and canMov%2!=0){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}
}