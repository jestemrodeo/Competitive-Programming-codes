#include<bits/stdc++.h>
using namespace std;
int m[20001][20001];
int fil1,col1,fil2,col2;
int comfil,endfil,comcol,endcol;
int cont=0;
int main(){
	freopen("maniobra.in","r",stdin);
	cin>>fil1>>col1>>fil2>>col2;
	fil1+=10000;
	fil2+=10000;
	col2+=10000;
	col1+=10000;
	if(fil1<fil2){
		comfil=fil1;
		endfil=fil2;
	}
	else{
		comfil=fil2;
		endfil=fil1;
	}
	if(col1<col2){
		comcol=col1;
		endcol=col2;
	}
	else{
		comcol=col2;
		endcol=col1;
	}
	for(int i=comfil; i<=endfil; i++){
		for(int j=comcol; j<=endcol; j++){
			m[i][j]=1;
		}
	}
	cin>>fil1>>col1>>fil2>>col2;
	fil1+=10000;
	fil2+=10000;
	col2+=10000;
	col1+=10000;
	if(fil1<fil2){
		comfil=fil1;
		endfil=fil2;
	}
	else{
		comfil=fil2;
		endfil=fil1;
	}
	if(col1<col2){
		comcol=col1;
		endcol=col2;
	}
	else{
		comcol=col2;
		endcol=col1;
	}
	for(int i=comfil; i<=endfil; i++){
		for(int j=comcol; j<=endcol; j++){
			if(m[i][j]==1){
				cont++;
			}
		}
	}
	cout<<cont<<endl;
	fclose(stdin);
	return 0;
}
