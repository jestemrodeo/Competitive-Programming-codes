#include<bits/stdc++.h>
using namespace std;
ifstream entra;
int main(){
	freopen("secreto.in","r",stdin);
	string oracion;
	stack<char> secreto;
	getline(cin,oracion);
	int j,k=0;
	for(int i=0; i<oracion.length(); i++){
		if(oracion[i]=='('){
			i++;
			while(oracion[i]!=')'){
				secreto.push(oracion[i]);
				i++;
			}
			while(secreto.size()>0){
				cout<<secreto.top();
				secreto.pop();
			}
		}
		else {
			cout<<oracion[i];
		}
	}
	return 0;
}
