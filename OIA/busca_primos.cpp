#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2; i<=n; i++){
		bool a=false;
		for(int j=1; j<=i/2; j++){
			if(i%j==0 && j!=1){
				a=true;
			}
		}
		if(!a){
			cout<<i<<endl;
		}
	}
	return 0;
}
