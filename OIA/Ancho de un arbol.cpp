#include<bits/stdc++.h>
using namespace std;
struct lista{
	vector <int> l; 
};
/*void excavarizq(stack<int> p){
	while(p.top()!=-1){
			p.push(arbol[actual].l[0]);
			actual=arbol[actual].l[0];
			nivel++;
		}
		p.pop();
}*/
vector<lista> arbol(1001);
vector< vector<int> > m(1001,vector<int>(1001));
int main(){
	freopen("arbol.in","r",stdin);
	int cant;
	cin>>cant;
	for(int i=0; i<cant; i++){
		int a,b,c;
		cin>>a>>b>>c;
		arbol[a].l.push_back(b);
		arbol[a].l.push_back(c);
	}
	stack<int> pila;
	pila.push(0);
	pila.push(1);
	int nivel=1;
	while(!pila.empty()){
		int i=1;
		int actual;
		actual=pila.top();
		int pasado=actual;
		while(pila.top()!=-1){
			pila.push(arbol[actual].l[0]);
			actual=arbol[actual].l[0];
			arbol[pasado].l[0]=-1;
			pasado=actual;
			nivel++;
		}
		pila.pop();
		actual=pila.top();
		m[nivel][i]=actual;
		i++;
		if(arbol[actual].l[1]!=-1){
			pila.push(arbol[actual].l[1]);
			actual=arbol[actual].l[1];
			arbol[actual].l[1]=-1;
		}
		pila.pop();
	}
	fclose(stdin);
	return 0;
}
