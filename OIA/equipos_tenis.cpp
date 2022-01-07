#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[4],e1=0,e2=0,t;
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	for(int i=0; i<4; i++){
		e2=e2+a[i];
	}
	t=0;
	for(int i=0; i<4; i++){
		if(a[i]>t){
			t=a[i];
		}
	}
	e1=e1+t;
	t=1000;
	for(int i=0; i<4; i++){
		if(a[i]<t){
			t=a[i];
		}
	}
	e1=e1+t;
	e2=e2-e1;
	t=abs(e1-e2);
	cout<<t<<endl;
	return 0;
	}
