#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n,m;

struct Arista{
	int destino;
	int costo;
};

vector<vector<Arista>> graph;
vector<int> dist;
vector<bool> best;
void dijkstra (int ini){
	int const INF = 10e9;
	
	dist.resize(n+1,INF);
	best.resize(n+1,false);
	
	priority_queue <pair<int,int>> pq;
	dist[ini] = 0;
	
	pq.push({0,ini});
	
	while(pq.size()>0){
		int nodo = pq.top().second;
		pq.pop();
		best[nodo] = true;
		
		for(auto a : graph[nodo]){
			
			int v = a.destino;
			int costo = a.costo;
			if(best[v]!=true){
				if(dist[v] > dist[nodo]+costo){
					dist[v] = dist[nodo]+costo;
					
					pq.push({-dist[v],v});
					
				}
			}
			
		}
	}
}


int main() {
	freopen("input.in","r",stdin);
	cin>>n>>m;
	
	graph.resize(n+1);
	
	for(int i=0; i<m; i++){
		int a,b,c;
		cin>>a>>b>>c;
		graph[a].push_back({b,c});
		graph[b].push_back({a,c});
	}
	
	dijkstra(1);
	
	int i=0;
	for(auto x : dist){
		if(i) cout<<"la distancia a "<<i<<" es: "<<x<<"\n";
		i++;
	}
	fclose(stdin);
}

