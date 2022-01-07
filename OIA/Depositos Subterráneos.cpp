#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen ("depositos.in","r",stdin);
	int cantdep;
	cin>>cantdep;
	int profundidades[cantdep], superficie[cantdep];
	for(int i=0; i<cantdep; i++){
		cin>>superficie[i]>>profundidades[i];
	}
	int volumen;
	cin>>volumen;
	int temp=0;
	//----------------------------------------------------------------------//
	for(int i=0; i<cantdep; i++){
		temp+=superficie[i]*profundidades[i];
	}
	if (temp<volumen){
		cout<<"Rebasan: "<<volumen-temp<<endl;
	}
	//----------------------------------------------------------------------//
	else{
		int maxprof=profundidades[0];
		int minprof=profundidades[cantdep-1];
		int j, i,deput=0;
		for(i=maxprof; i>0; i--){
			for(j=0; j<cantdep; j++){
				if(profundidades[j]>=i){
					volumen-=superficie[j];
				}
				if(volumen<=0){
				break;
			}
		}
		if(volumen<=0){
				break;
			}
		}
		cout<<j+1<<endl;
		cout<<i-1<<endl;
	}
	fclose(stdin);
    return 0;
}
