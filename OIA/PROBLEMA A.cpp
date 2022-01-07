#include<bits/stdc++.h>
using namespace std;
int main(){
	string oracion;
	cin>>oracion;
	bool esta=false;
	for(int i=0; i<oracion.length(); i++){
		if(oracion[i]=='i'){
			esta=true;
		}
	}
	if(esta){
		cout<<"N"<<endl;
	}
	else{
		cout<<"S"<<endl;
	}
	return 0;
}
