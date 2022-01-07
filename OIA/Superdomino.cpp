#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen ("domino.in","r",stdin);
	int cant;
	cin>>cant;
	list<int> dominofinal;
	int a,b;
	cin>>a>>b;
	dominofinal.push_back(a);
	dominofinal.push_back(b);
	list<int>::iterator it;
	for(int i=0; i<cant; i++){
		cin>>a>>b;
		it=dominofinal.begin();
		if(*it==a){
			dominofinal.push_front(b);
		}
		else if(*it==b){
			dominofinal.push_front(a);
		}
		it=dominofinal.end();
		it--;
		if(*it==a){
			dominofinal.push_back(b);
		}
		else if(*it==b){
			dominofinal.push_back(a);
		}
	}
	int resp=dominofinal.size()-1;
	cout<<resp<<endl;
	fclose(stdin);
    return 0;
}
