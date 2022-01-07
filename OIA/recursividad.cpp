#include<bits/stdc++.h>
using namespace std;
bool GNA(int i, int a[], int obj){
	obj=obj-a[i];
	if(obj==0){
		return true;
	}
	else if(obj<0){
		return false;
	}
	else{
		GNA(i+1,a,obj);
		GNA(i,a,obj);
	}
}
int main(){
	int obj=12;
	int array[]={2, 5, 10, 4};
	int c=0;
	if( GNA(c,array, obj)){
		cout<<"se puede"<<endl;
	}
	else
		cout<<"no se puede"<<endl;
}
