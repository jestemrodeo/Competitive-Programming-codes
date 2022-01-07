#include <iostream>;
using namespace std;
int a[50];
int fibonacci (int n){
	if (n==0){
		return a[n];
	}
	else if (n==1 or n==2){
		return a[n];
	}
	else{
		if (a[n-1]==-1 and a[n-2]==-1){
		int v=fibonacci(n-1)+fibonacci(n-2);
		a[n]=v;
		return v;
		}
		else if(a[n-1]!=-1 and a[n-2]==-1){
		int v=fibonacci(a[n-1])+fibonacci(n-2);
		a[n]=v;
		return v;
		}
		else if(a[n-1]==-1 and a[n-2]!=-1){
		int v=fibonacci(n-1)+fibonacci(a[n-2]);			
		a[n]=v;
		return v;
		}
		else {
		int v=fibonacci(a[n-1])+fibonacci(a[n-2]);
		a[n]=v;
		return v;
		}
	}
}
int main(){
	int n;
	for(int i=3; i<50; i++){
		a[i]=-1;
	}
	a[0]=0; a[1]=1; a[2]=1;
	cin>>n;
	cout<<fibonacci(n)<<endl;
	return 0;
}
