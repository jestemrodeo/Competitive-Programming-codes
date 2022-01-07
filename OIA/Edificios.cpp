#include<bits/stdc++.h>
using namespace std;
int cant,manz,cantedif,b=0,a;
string masterreno,mascalle,nombre;
int terrenomax=0,callemax=0,fil1,fil2,col1,col2;
int ct,cc;
int main(){
	freopen("edif.in","r",stdin);
	cin>>manz>>cant;
	for(int i=0; i<cant; i++){
		cin>>fil1>>col1>>fil2>>col2>>a>>nombre;
		b+=a;
		ct=abs(fil1-fil2)*abs(col1-col2);
		if(ct>terrenomax){
			terrenomax=ct;
			masterreno=nombre;
		}
		cc=abs(fil1-fil2);
		if(cc>callemax){
			callemax=cc;
			mascalle=nombre;
		}
		cc=abs(col1-col2);
		if(cc>callemax){
			callemax=cc;
			mascalle=nombre;
		}
	}
	cout<< b <<endl<<masterreno<<endl<<mascalle<<endl;
	return 0;
}
