#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<vector<int>> grafo;

void bfs(int s, vector<int> &distancias){
	queue<int> q;
	q.push(s);
	distancias[s]=0;
	while(!q.empty()){
		int act = q.front();
		q.pop();
		for(int i=0; i<grafo[act].size(); i++){
			if(distancias[grafo[act][i]]==-1){
				q.push(grafo[act][i]);
				distancias[grafo[act][i]]=distancias[act]+1;
			}
		}
	}
}

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);
	freopen("erdosdarwin.in", "r",stdin);
	int n,m; cin>>n>>m;
	int d; cin>>d;
	grafo.resize(n+1);
	
	for(int i=0; i<m; i++){
		int a,b;
		cin>>a>>b;
		grafo[a].push_back(b);
		grafo[b].push_back(a);
	}
	
	vector<int> numeroErdos(n+1,-1);
	vector<int> numeroDarwin(n+1,-1);
	
	bfs(1,numeroErdos);
	bfs(n,numeroDarwin);
	
	int res=0;
	for(int i=1; i<=n; i++){
		if(numeroErdos[i]!=-1 && numeroDarwin[i]!=-1 &&
		   numeroErdos[i]+numeroDarwin[i]<=d){
			res++;
		}
	}
	
	cout<<res<<"\n";
	
	//fclose(stdin);
}

