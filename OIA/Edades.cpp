#include<bits/stdc++.h>
using namespace std;
int main (){
	int ref[3]={2016,9,12};
	int dias=0;
	int edad[3];
	for(int i=0; i<3; i++){
		cin>>edad[i];
	}
	if(edad[1]>=ref[1]){
		dias+=abs(edad[0]-ref[0])*365;
		dias-=(edad[1]-ref[1])*30;
	}
	else{
		dias+=abs(edad[0]-ref[0])*365;
		dias+=(ref[1]-edad[1])*30;
	}
	if(edad[2]>=ref[2]){
		dias-=(edad[2]-ref[2]);
	}
	else{
		dias+=ref[2]-edad[2];
	}
	cout<<dias<<endl;
	return 0;
}

