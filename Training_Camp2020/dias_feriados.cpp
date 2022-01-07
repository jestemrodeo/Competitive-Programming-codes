#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int cantFe,n,cantFal;
	cin>>cantFe>>n>>cantFal;
	vector<bool> esFeriado(n,0);
	for(int i=0; i<cantFe; i++){
		int t; cin>>t;
		esFeriado[t-1]=1;
	}
	int faltados=0;
	int max_falt=0;
	int j=0;
	int faltasRes = 0;
	for(int i=0; i<n; i++){
		while(faltasRes<=cantFal and j<n){
			if(!esFeriado[j] and faltasRes<cantFal){
				faltasRes++;
				faltados++;
			}
			else if(esFeriado[j]){
				faltados++;
			}
			else{
				break;
				//cout<<"nosee"<<endl;
			}
			//cout<<"faltasRes: "<<faltasRes<<"\n";
			j++;
		}
		//cout<<"faltados: "<<faltados<<"\n";
		max_falt = max(max_falt, faltados);
		if(!esFeriado[i]){
			faltasRes++;
			faltados--;
		}
	}
	cout<<max_falt<<"\n";
}