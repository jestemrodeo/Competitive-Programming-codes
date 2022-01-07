#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> visitado;
vector<vector<pair<int,int>>> graph;
int cvisitados = 0;
int cllenos = 0;
int k;
pair<int,int> res = {-1,-1};
void dfs(int nodo, int padre, int posHijo){
	//cout<<"nodo actual: "<<nodo<<"\n";
	vector<pair<int,int>> hijos = graph[nodo];
	visitado[nodo] = true;
	/*
	if(cllenos==k-1 && res.first==-1 && res.second==-1){
		//cout<<"guardado!\n"<<"padre:"<<nodo<<"cant: "<<graph[nodo][posHijo].first-1<<"\n";
		if(hijos.size()>0){
			res = {nodo, hijos[0].first-1};
		}
		else{
			res = {nodo, 9999};
		}
	}
	*/
	for(int i=0; i<graph[nodo].size(); i++){
		if(cllenos<=k){
			if(visitado[hijos[i].second] == false){
				dfs(hijos[i].second, nodo, i);
				//cout<<"Se lleno: "<<hijos[i].second<<"\n";
				cllenos++;
				if(cllenos==k-1 && res.first==-1 && res.second==-1){
					//cout<<"guardado!\n"<<"padre:"<<nodo<<"cant: "<<graph[nodo][posHijo].first-1<<"\n";
					if(hijos.size()>0){
						res = {nodo, hijos[0].first-1};
					}
					else{
						res = {nodo, 9999};
					}
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	graph.resize(n+1);
	visitado.resize(n+1,false);
	for(int i=0; i<n-1; i++){
		int a, peso, b; 
		cin>>a>>peso>>b;
		graph[a].push_back({peso,b});
	}
	cin>>k;
	for(int i=0; i<n; i++){
		sort(graph[i].rbegin(), graph[i].rend());
	}
	dfs(1, 1, 0);
	cout<<res.first<<" "<<res.second<<"\n";
}

