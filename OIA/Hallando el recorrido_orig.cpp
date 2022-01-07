#include<bits/stdc++.h>
using namespace std;
struct lista{
	vector<int> l;
};
int main(){
	freopen("circuito.in","r",stdin);
	int x,y,cant;
	cin>>x>>y>>cant;
	vector< lista > filas(cant);
	vector< lista > col(cant);
	for(int i=0; i<cant; i++){
		cin>>x>>y;
		filas[x].l.push_back(y);
		col[y].l.push_back(x);
	}
	int pi,p2,p3,p4;
	int mayor=-1;
	for(int i=0; i<cant; i++){
		cout<<i<<"--> ";
		for(int j=0; j<filas[i].l.size(); j++){
			cout<<filas[i].l[j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<cant; i++){
		cout<<i<<"--> ";
		for(int j=0; j<col[i].l.size(); j++){
			cout<<col[i].l[j]<<" ";
		}
		cout<<endl;
	}
	//guardar el mayor perimetro y mostrarlo al final
	vector<int>::iterator it,it2,it3,it4;
	for(int i=0; i<cant; i++){
		it=filas[i].l.begin();
		if(filas[i].l.size()>=2){
			for(int j=0; j<filas[i].l.size(); i++){
				pi=*it;
				cout<<pi<<endl;
				if(col[pi].l.size()>=2){
					for(int k=0; k<col[pi].l.size(); k++){
						it2=col[pi].l.begin();
						if(col[pi].l[k]!=i){
							p2=*it2;
							cout<<p2<<endl;
						}
						it2++;
					}
			}
		}
		it++;
	}
	cout<<"El perimetro mayor es: "<<mayor<<endl;
	fclose(stdin);
	return 0;
}
