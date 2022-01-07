#include<bits/stdc++.h>
using namespace std;
struct par{
	int x;
	int y;
};
int main (){
	freopen("rusia.in","r",stdin);
	par inicio, llegada;
	int cant;
	bool alguno=false;
	int unapena=-1;
	cin>>inicio.x>>inicio.y>>cant;
	for(int i=0; i<cant; i++){
		int max;
		cin>>llegada.x>>llegada.y>>max;
		if((llegada.x-inicio.x)+(llegada.y-inicio.y)<max){
			cout<<i+1<<endl;
			alguno=true;
		}
	}
	if(!alguno){
		cout<<unapena<<endl;
	}
	fclose(stdin);
	return 0;
}
