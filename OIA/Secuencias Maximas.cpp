#include<bits/stdc++.h>
using namespace std;
ifstream entra;
int main(){
	freopen("secmax.in","r",stdin);
	int cant;
	int num,cantvalidos=0,sectemp=0,secmax=0;
	cin>>cant;
	for(int i=0; i<cant; i++){
		cin>>num;
		if(num%2!=0 and num%3!=0 and num%5!=0){
			cantvalidos++;
			sectemp++;
		}
		else {
				if(sectemp>secmax){
				secmax=sectemp;
			}
			sectemp=0;	
		}
	}
	cout<<cantvalidos<<endl<<secmax<<endl;
	return 0;
}
