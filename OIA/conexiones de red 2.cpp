#include<bits/stdc++.h>
using namespace std;
vector<int> matriz(1000001)(1000001);
stack<int> p;
vector<int> visitados;
bool enc;
bool pregunta(int pc1,int pc2){
	p.push(pc1);
	while(!p.empty()){
		visitados.push_back(pc1);
		if(p.front()!=pc2){
			p.push()
		}
}
char comando;
int main (){
	freopen("red.in","r",stdin);
	cin>>comando;
	while(comando!='F'){
		if(comando=='C'){
			cin>>c1>>c2;
			
		}
		else if(comando=='P'){
			pregunta(c1,c2);
			if(enc){
				cout<<'S'<<endl;
			}
			else{
				cout<<'N'<<endl;
			}
		}
		cin>>comando;
	}
	fclose(stdin);
	return 0;
}
