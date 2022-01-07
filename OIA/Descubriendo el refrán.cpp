#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("refran.in","r",stdin);
	int cant;
	cin>>cant;
	string palabras;
	int impar;
	for(int i=0; i<cant; i++){
		cin>>palabras;
		if(palabras.length()%2==0){
			for(int j=palabras.length()-1; j>=0; j--){
				cout<<palabras[j];
			}
		}
		else if(palabras.length()!=1 and palabras.length()!=3){
			impar=palabras.length()-3;
			for(int k=palabras.length()-impar/2; k<palabras.length(); k++){
				cout<<palabras[k];
			}
			for(int l=impar/2; l<palabras.length()-impar/2; l++){
				cout<<palabras[l];
			}
			for(int m=0; m<impar/2; m++){
				cout<<palabras[m];
			}
		}
		else{
			cout<<palabras;
		}
		if(i!=cant-1){
			cout<<" ";
		}
	}
	cout<<"."<<endl;
	fclose(stdin);
	return 0;
}
