#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
int n;
pair<int,int> ini, fin={1,1}, aux_fin={1,1};
int max_long = 0;
vector<vector<int>> v;
vector<vector<bool>> visitado;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool isValid(const int &a, const int &b){
	return (a>0)&&(b>0)&&(a<v.size())&&(b<v.size());
}
	
int dfs(pair<int,int> nodo, bool &termina){
	int sigue = 0;
	int ktlong_max = 0;
	visitado[nodo.first][nodo.second] = true;
	pair<int,int> temp_fin = {0,0};
	for(int i=0; i<4; i++){
		int actx = nodo.first + dx[i];
		int acty = nodo.second + dy[i];
		if(isValid(actx,acty) && visitado[actx][acty]==false && v[actx][acty]<v[nodo.first][nodo.second]){
			if (sigue == 0){
				sigue = 1;
			}
			
			int temp = dfs({actx,acty},termina);
			if(ktlong_max<temp){
				ktlong_max = temp;
				if(termina){
					temp_fin = {actx,acty};
				}
			}
		}
	}
	if(temp_fin.first!=0 and temp_fin.second!=0){
		aux_fin = temp_fin;
	}
	if(sigue==0){
		termina=true;
	}
	return sigue+ktlong_max;
}

int ini_dfs(pair<int,int> nodo){
	visitado.resize(n+1);
	for(int i=0; i<n+1; i++){
		visitado[i].resize(n+1,false);
	}
	bool termina = false;
	return dfs(nodo,termina);
}

void solve (){
	for(int i=1; i<n+1; i++){
		for(int j=1; j<n+1; j++){
			int aux_long = ini_dfs({i,j});
			if(max_long<aux_long){
				max_long = aux_long;
				ini = {i,j};
				fin = aux_fin;
			}
		}
	}
}
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	v.resize(n+1,vector<int> (n+1));
	for(int i=1; i<n+1; i++){
		for(int j=1; j<n+1; j++){
			cin>>v[i][j];
		}
	}
	solve();
	cout<<max_long<<"\n";
	cout<<ini.second<<" "<<ini.first<<" "<<fin.first<<" "<<fin.second<<"\n";
}

