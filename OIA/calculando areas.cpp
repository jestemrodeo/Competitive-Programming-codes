#include<bits/stdc++.h>
using namespace std;
int main(){
	string p;
	cin>>p;
	if(p=="cuadrado"){
		int a;
		cin>>a;
		cout<<a*a<<endl;
	}
	else if(p=="cubo"){
		int a;
		cin>>a;
		cout<<6*a*a<<endl;
	}
	else if(p=="rectangulo"){
		int a,b;
		cin>>a>>b;
		cout<<a*b<<endl;
	}
	else{
		int w,l,h;
		cin>>w>>l>>h;
		cout<<(2*l*w)+(w*h*2)+(l*h*2)<<endl;
	}
	return 0;
}
