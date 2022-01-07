#include<bits/stdc++.h>
using namespace std;

void MA(int a[], int i, int l){
	if(i<l){
		cout<<a[i]<<endl;
		MA(a,i+1,l);
	}
	else
		cout<<"No hay mas"<<endl;
}

void MAalreves(int a[], int i, int l){
	if(i<l){
		MAalreves(a,i+1,l);
		cout<<a[i]<<endl;
	}
	else
		cout<<"No hay mas"<<endl;
}

int main(){
	int largo=5;
	int array[largo]={10, 7, 5, 3, 1};
	int c=0;
	MA(array,c,largo);
	MAalreves(array,c,largo);
}
