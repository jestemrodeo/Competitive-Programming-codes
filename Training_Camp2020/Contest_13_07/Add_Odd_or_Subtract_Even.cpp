#include<cstdio>
#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;

	for(int i=0; i<n; i++){
		int a,b;
		cin>>a>>b;
		int dif = abs(a-b);
		if(dif==0){
			cout<<0<<"\n";
		}
		else if(dif%2==0 and b>a){
			cout<<2<<"\n";
		}
		else if(dif%2==0 and a>b){
			cout<<1<<"\n";
		}
		else if (a>b){
			cout<<2<<"\n";
		}
		else{
			cout<<1<<"\n";
		}
	}
}