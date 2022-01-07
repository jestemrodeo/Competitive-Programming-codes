//INCOMPLETO
#include<bits/stdc++.h>
using namespace std;
struct a{
		string x;
		int y;
	};
vector<a> nombres(1001);
int main(){
	freopen("nombres","r",stdin);
	int cant_nom;
	int cant_mostrar;
	cin>>cant_nom;
	cin>>cant_mostrar;
	vector<a>::iterator it;
	
	for(int i=0; i<cant_nom; i++){
		cin>>nombres[i].x;
		it=find(nombres.begin(),nombres.end(),);
		//USAR a=DISTANCEEE(begin,it)
		if (it!=nombres.end()){
			cout<<*it<<endl;
		}
		
	}
	fclose(stdin);
	return 0;
}
