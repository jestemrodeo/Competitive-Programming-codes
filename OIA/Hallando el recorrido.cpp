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
							if(filas[p2].l.size()>=2){
								for(int k2=0; k2<filas[p2].l.size(); k2++){
									it3=filas[p2].l.begin();
									if(filas[p2].l[k2]!=pi){
										p3=*it3;
										cout<<p3<<endl;
										if(col[p3].l.size()>=2){
											for(int k3=0; k3<col[p3].l.size(); k3++){
												it4=col[p3].l.begin();
												if(col[p3].l[k]!=p2){
													p4=*it4;
													cout<<p4<<endl;
													vector<int>::iterator f;
													f=find(filas[p4].l.begin(),filas[p4].l.end(),pi);
													if(f!=filas[p4].l.end()){
														int perimetro=(p4-p2)*2+(pi-p3)*2;
														if(perimetro>mayor){
															mayor=perimetro;
														}
													}
												}
												it4++;
											}
										}
									}
									it3++;
								}
							}	
						}
						it2++;
					}
				}
				it++;
			}
		}
	}
	cout<<"El perimetro mayor es: "<<mayor<<endl;
	fclose(stdin);
	return 0;
}
