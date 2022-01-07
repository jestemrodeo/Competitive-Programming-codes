#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t=0;
	cin>>n;
	for(int i=6; i<=n; i++){
		for(int j=1; j<=i/2; j++){
			if(i%j==0){
				t+=j;
			}
		}
		if(t==i){
			cout<<t<<endl;
		}
		t=0;
	}
	return 0;
}
