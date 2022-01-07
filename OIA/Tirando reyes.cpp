#include<bits/stdc++.h>
using namespace std;
int main (){
	//se espera salida 5 1 4
	//				   2 3 6
    freopen ("truco.in","r",stdin);    
    int cant;
    cin>>cant;
    list <int> participantes;
    list <int> equiporeyes;
    for(int i=1; i<=cant; i++){
    	participantes.push_back(i);
	}
	int carta;
	char letra;
	list<int>::iterator it=participantes.begin();
		while(equiporeyes.size()!=cant/2){
			cin>>carta;
			cin>>letra;
			if (carta==12){
				equiporeyes.push_back(*it);
				it=participantes.erase(it);
			}else{
				it++;
			}
			if (it==participantes.end()){
				it=participantes.begin();
			}
		}
    for(it=equiporeyes.begin(); it!=equiporeyes.end(); ++it){
    	cout<<*it<<" ";
	}
	cout<<endl;
	for(it=participantes.begin(); it!=participantes.end(); ++it){
		cout<<*it<<" ";
	}
	//usar un entero en el while, el mismo formato
	fclose(stdin);
    return 0;
}
