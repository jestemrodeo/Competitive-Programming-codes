#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen ("bicisenda.in","r",stdin);
	int cant,cantbloques;
	cin>>cantbloques;
	char colores[cantbloques];
	for(int i=0; i<cantbloques; i++){
		colores[i]='.';
	}
	cin>>cant;
	int a,b;
	char c;
	for(int i=0; i<cant; i++){
		cin>>a>>b>>c;
		for(int j=a; j<=b; j++){
			switch(c){
				case 'R': switch(colores[j]){
					case '.': colores[j]='R';
						break;
					case 'Z': colores[j]='P';
						break;
					case 'A': colores[j]='N';
						break;
					case 'V': colores[j]='M';
						break;
				}
					break;
				case 'Z': switch(colores[j]){
					case '.': colores[j]='Z';
						break;
					case 'R': colores[j]='P';
						break;
					case 'A': colores[j]='V';
						break;
					case 'N': colores[j]='M';
						break;
				}
					break;
				case 'A': switch(colores[j]){
					case '.': colores[j]='A';
						break;
					case 'R': colores[j]='N';
						break;
					case 'Z': colores[j]='V';
						break;
					case 'P': colores[j]='M';
						break;
				}
				break;
			}
		}
	}
	for(int i=0; i<cantbloques; i++){
		cout<<colores[i];
	}
	cout<<endl;
	fclose(stdin);
    return 0;
}
