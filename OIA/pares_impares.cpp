#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b=0, c=0,t=1;
	cin>>a;
	while(t<=a){
		if(t%2==0){
			b+=t;
		}
		else{
			c+=t;
		}
		t++;
	}
	cout<<b-c<<endl;
}
