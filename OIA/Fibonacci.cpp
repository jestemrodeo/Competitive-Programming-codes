#include<bits/stdc++.h>
using namespace std;
ifstream entra;
ofstream sale;
int main(){
	int a,b, temp;
	freopen("Fibonacci.in","r",stdin);
	freopen("Fibonacci.out","w",stdout);
	cin>>a>>b;
	for(int i=0; i<10; i++){
		temp=a+b;
		cout<<temp<<" ";
		a=b;
		b=temp;
	}
	return 0;
}
