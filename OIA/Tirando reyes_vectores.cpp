#include<bits/stdc++.h>
using namespace std;
int main (){
	//se espera salida 5 1 4
	//				   2 3 6
    freopen ("truco.in","r",stdin);
    freopen ("truco.out","w",stdout);
    int cant;
    cin>>cant;
    vector<int> participantes;
    vector<int> equiporeyes;
    for(int i=1; i<=cant; i++){
    	participantes.push_back(i);
	}
	int carta;
	char letra;
	vector<int>::iterator it=participantes.begin();
	int i=0;
	while(i<cant/2){
		cin>>carta;
		cin>>letra;
		if (carta==12){
			equiporeyes.push_back(*it);
			it=participantes.erase(it);
			i++;
		}else{
			it++;
		}
		if (it==participantes.end()){
			it=participantes.begin();
		}
	}
    for(it=equiporeyes.begin(); it!=equiporeyes.end(); ++it){
		cout<<*it;
		if(it!=equiporeyes.end()-1){
				cout<<" ";
		}
	}
	cout<<endl;
	for(it=participantes.begin(); it!=participantes.end(); ++it){
		cout<<*it;
		if(it!=participantes.end()-1){
			cout<<" ";
		}
	}
	cout<<endl;
	fclose(stdin);
	fclose(stdout);
    return 0;
}
