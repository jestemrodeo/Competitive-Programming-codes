#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, total;
	cin>>n;
	if(n%2==0){
		n=n/2;
		cout<<n<<endl;
	}
	else{
		n=(n/2)+1;
		n=-n;
		cout<<n<<endl;
	}
	return 0;
}
