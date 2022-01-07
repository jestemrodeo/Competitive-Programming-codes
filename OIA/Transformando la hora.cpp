#include<bits/stdc++.h>
using namespace std;
int main (){
	int a,c;
	char b;
	while(2==2){
	cin>>a>>b>>c;
	if(a>=12)
		cout<<a-12<<b<<c<<" PM"<<endl;
	else if (a==00)
		cout<<12<<b<<c<<" AM"<<endl;
	else 
		cout<<a<<b<<c<<" AM"<<endl;
	}
	return 0;
}
