#include<bits/stdc++.h>
using namespace std;
struct p{
	int x;
	int y;
};
int main(){
	freopen("rusia.in","r",stdin);
	bool encuentrep=false,encuentre=false;
	int unapena=-1;
	queue<p> cola;
	p np,inicial;
	int extx,exty,cant,max;
	cin>>np.x>>np.y;
	inicial=np;
	cola.push(np);
	cin>>cant;
	for (int i=0; i<cant; i++){
		cin>>extx>>exty>>max;
		char m[extx+1][exty+1];
		m[extx][exty]='S';
		int pasos=1;
		p posactual;
		while (!encuentre){
			cout<<"----------------------------------------"<<endl<<i+1<<endl;
			posactual=cola.front();
			cout<<"POSICION ACTUAL: "<<posactual.x<<" "<<posactual.y<<endl;
			cola.pop();
			if(posactual.x<extx && posactual.x+1!='V'){
				if(posactual.x+1=='S'){
					encuentrep=true;
					encuentre=true;
				}
				else{
					m[posactual.x+1][posactual.y]='V';
					np.x=posactual.x+1;
					np.y=posactual.y;
					cola.push(np);
				}
			}
			if(posactual.x>0 && posactual.x-1!='V'){
				if(posactual.x-1=='S'){
					encuentrep=true;
					encuentre=true;
				}
				else{
					m[posactual.x-1][posactual.y]='V';
					np.x=posactual.x-1;
					np.y=posactual.y;
					cola.push(np);
				}
			}
			if(posactual.y<exty && posactual.y+1!='V'){
				if(posactual.y+1=='S'){
					encuentre=true;
					encuentrep=true;
				}
				else{
					m[posactual.x][posactual.y+1]='V';
					np.x=posactual.x;
					np.y=posactual.y+1;
					cola.push(np);
				}
			}
			if(posactual.y>0 && posactual.y-1!='V'){
				if(posactual.x-1=='S'){
					encuentrep=true;
					encuentre=true;
				}
				else{
					m[posactual.x][posactual.y-1]='V';
					np.x=posactual.x;
					np.y=posactual.y-1;
					cola.push(np);
				}
			}
		}
		for(int j=0; j<cola.size(); j++){
			cola.pop();
		}
		if (encuentre &&){
			cout<<i+1<<endl;
		}
		cola.push(inicial);
	}
	if(!encuentrep){
		cout<<unapena<<endl;
	}
	fclose(stdin);
	return 0;
}
