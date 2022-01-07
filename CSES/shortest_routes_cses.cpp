#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n,m;

struct Arista{
	long long destino;
	long long costo;
};

vector<vector<Arista>> graph;
vector<long long> dist;
vector<bool> best;
void dijkstra (int ini){
	long long const INF = 10e18+1;
	
	dist.resize(n+1,INF);
	best.resize(n+1,false);
	
	priority_queue <pair<long long,long long>> pq;
	dist[ini] = 0;
	
	pq.push({0,ini});
	
	while(pq.size()>0){
		int nodo = pq.top().second;
		pq.pop();
		
		if(best[nodo] == true) continue;
		best[nodo] = true;
		for(auto a : graph[nodo]){
			int v = a.destino;
			int costo = a.costo;
			if(dist[v] > dist[nodo]+costo){
				dist[v] = dist[nodo]+costo;
				pq.push({-dist[v],v});
			}
		}
	}
}


int main() {
	//freopen("input.in","r",stdin);
	cin>>n>>m;
	
	graph.resize(n+1);
	
	for(int i=0; i<m; i++){
		int a,b,c;
		cin>>a>>b>>c;
		graph[a].push_back({b,c});
	}
	
	dijkstra(1);
	
	for(int i=1; i<=n; i++){
		if (i>1) cout<<" ";
		cout<<dist[i];
	}
	cout<<"\n";
	//fclose(stdin);
}

