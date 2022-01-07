#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> e;
vector<vector<int>> graph;
vector<pair<bool,int>> visAndLev;
int bfs(int ini){
	int lev=1;
	queue<int> q;
	q.push(ini);
	visAndLev[ini].first=true;
	visAndLev[ini].second=1;
	while(!q.empty()){
		int act=q.front();
		q.pop();
		for(auto h : graph[act]){
			if(visAndLev[h].first!=true){
				q.push(h);
				visAndLev[h].second=visAndLev[act].second+1;
				lev = max(lev,visAndLev[h].second);
			}
		}
	}
	return lev;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	e.resize(n+1);
	graph.resize(n+1);
	visAndLev.resize(n+1);
	for(int i=1; i<=n; i++){
		int a; cin>>a;
		e[i] = a;
		if(a!=-1) graph[a].push_back(i);
	}
	int res=0;
	int lev=1;
	for(int i=1; i<=n; i++){
		if(e[i]==-1){
			lev = bfs(i);
		}
		res = max(res, lev);
	}
	cout<<res<<"\n";
}

