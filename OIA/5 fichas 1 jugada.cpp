#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen ("fichas.in","r",stdin);
	int tab,cant;
	cin>>tab;
	char tablero[tab+1][tab+1];
	cin>>cant;
/*	for (int i=1; i<=tab; i++){
		for(int j=1; j<=tab; j++){
			tablero[i][j]='B';
		}
	}*/
	for(int i=1; i<=cant; i++){
		int a,b;
		char jugada;
		cin>>a>>b>>jugada;
		tablero[a][b]=jugada;
	}
	int seguidas=0;
	bool encuentre=false;
	bool blanco=false;
		for(int i=1; i<=tab; i++){
			for(int j=1; j<=tab-5; j++){
				blanco=false;
				for(int k=j; k<=5; k++){
					if(tablero[i][k]=='O'){
						seguidas++;
						if (seguidas==5){
							encuentre=true;
						}
					}
					if(tablero[i][k]!='X' and blanco==false and seguidas==5){
						cout<<i<<" "<<k+j<<endl;
						blanco=true;
					}
					else{
						break;
					}
				}
			}
		}
		for(int i=1; i<=tab; i++){
			for(int j=1; j<=tab-5; j++){
				blanco=false;
				for(int k=j; k<=5; k++){
					if(tablero[k][i]=='O'){
						seguidas++;
						if (seguidas==5){
							encuentre=true;
						}
					}
					if(tablero[k][i]!='X' and blanco==false and seguidas==5){
						cout<<i<<" "<<k+j<<endl;
						blanco=true;
					}
					else{
						break;
					}
				}
			}
		}
	fclose(stdin);
    return 0;
}
