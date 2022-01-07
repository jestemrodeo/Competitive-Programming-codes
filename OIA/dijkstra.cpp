#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#define INF 100000000
using namespace std;

vector<vector<pair<int,int>>> grafo;

vector<int> dijkstra(vector<int> &padres){
	vector<int> dist(grafo.size(),INF);
	///Si quiero saber el camino que recorro hasta 
	///mi destino agrego:
	///----------------------------------------
	priority_queue<pair<int,int>> caja;
	dist[1]=0;
	caja.push({0,1});
	while(!caja.empty()){
		int nodo = caja.top().second;
		caja.pop();
		
		for(int i=0; i<grafo[nodo].size(); i++){
			int vecino = grafo[nodo][i].first;
			int costo = grafo[nodo][i].second;
			if(dist[nodo]+costo < dist[vecino]){
				///Cada vez que actualizo distancia
				///guardo de donde vengo (el padre)
				padres[vecino] = nodo;
				dist[vecino] = dist[nodo]+costo;
				caja.push({-dist[vecino],vecino});
			}
		}
	}
	return dist;
}
	

int main() {
	freopen("dijkstra.in", "r",stdin);
	/*
	Caso prueba:
	6 7
	1 2 5
	1 5 2
	1 4 9
	2 3 2
	4 3 3
	4 6 2
	5 6 3
	*/
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	
	int n,m; cin>>n; cin>>m;
	
	grafo.resize(n+1);
	
	for(int i=0; i<m; i++){
		int a,b,c; cin>>a>>b>>c;
		grafo[a].push_back({b,c});
		grafo[b].push_back({a,c});
	}
	
	vector<int> padres(grafo.size(), -1);
	
	vector<int> dist = dijkstra(padres);
	
	for(int i=1; i<dist.size(); i++){
		cout<<"distancia a "<<i<<" es: "<<dist[i]<<"\n";
	}
	
	///Para saber el camino
	///destino: nodo 4
	
	int act = 4;
	stack <int> camino;
	while(act!=-1){
		camino.push(act);
		act = padres[act];
	}
	cout<<"Camino hasta 6:\n";
	while(!camino.empty()){
		cout<<camino.top()<<"\n";
		camino.pop();
	}
}

