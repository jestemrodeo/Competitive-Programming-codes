#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("codigo.in","r",stdin);
	freopen("codigo.out","w",stdout);
	int cantclave;
	cin>>cantclave;
	int clave[cantclave];
	string clavestring;
	cin>>clavestring;
	for(int i=0; i<clavestring.length(); i++){
		clave[i]=clavestring[i]-48;
	}
	int cant;
	cin>>cant;
	string letra;
	int num;
	int cont=0;
	while(cin>>letra){
		for(int i=0; i<letra.length(); i++){
			num=letra[i];
			num=num+clave[cont];
			if(num>90){
			num=num-26;
			}
			letra[i]=num;
			cout<<letra[i];
			cont++;
			if(cont==cantclave){
				cont=0;
			}
		}
	}
	cout<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
