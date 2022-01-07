#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin>>n>>m;
	vector<vector<int>> graph(n+1);
	for(int i=0; i<m; i++){
		int a,b; cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	bool isPossible=false;
	vector<pair<int,int>> dist(n+1, {-1,-1});
	dist[1].first = 1;
	queue<int> q;
	q.push(1);
	while(!q.empty()){
		int act = q.front();
		q.pop();
		if(act == n){
			cout<<dist[n].first<<"\n";
			isPossible = true;
			break;
		}
		for(auto h : graph[act]){
			if(dist[h].first==-1){
				dist[h].first=dist[act].first+1;
				dist[h].second=act;
				q.push(h);
			}
		}
	}
	
	if(isPossible){
		stack<int> camino;
		int act = n;
		camino.push(n);
		while(act!=1){
			camino.push(dist[act].second);
			act=dist[act].second;
		}
		bool fp=true;
		while(!camino.empty()){
			if(fp) fp=false;
			else cout<<" ";
			cout<<camino.top();
			camino.pop();
		}
		cout<<"\n";
	}
	else{
		cout<<"IMPOSSIBLE\n";
	}
}
