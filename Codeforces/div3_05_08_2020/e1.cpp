#include <bits/stdc++.h>

using namespace std;

int maxSum, mov = 0;
priority_queue <int> pq;

void dfs (vector<vector<pair<int,int>>> const &graph, vector<bool> &visitado,
          int nodo, int costo, int sumaParcial){
    visitado[nodo] = true;
    pq.push(costo);
    if(graph[nodo].size()>1){
        for(int i=0; i<graph[nodo].size(); i++){
            if(visitado[graph[nodo][i].first]!=true){
                sumaParcial += graph[nodo][i].second;
                dfs(graph, visitado, graph[nodo][i].first, graph[nodo][i].second, sumaParcial);
            }
        }
    }
    else {
        while(sumaParcial > maxSum){
            int may = pq.top();
            pq.pop();
            sumaParcial = sumaParcial - may;
            may = may / 2;
            sumaParcial = sumaParcial + may;
            pq.push(may);
            mov++;
        }
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int ct; cin>>ct;
	for(int t=0; t<ct; t++){
        int n; cin>>n>>maxSum;
        mov = 0;
        vector<vector<pair<int,int>>> graph(n+1);
        vector<bool> visitado(n+1, false);
        for(int i=0; i<n-1; i++){
            int a, b, c; cin>>a>>b>>c;
            graph[a].push_back({b,c});
            graph[b].push_back({a,c});
        }
        dfs(graph, visitado, 1, 0, 0);
        cout<<mov<<"\n";
	}
}
