#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dx[4] = {0, 0, -1, 2};
int dy[4] = {1, -1, 0, 0};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,x,y,c;
	cin>>n>>x>>y>>c;
	vector<vector<pair<int,int>>> visitado (n+1,vector<pair<int,int>> (n+1,{0,-1}));
	queue<pair<int,int>> q;
	q.push({x,y});
	visitado[x][y]={1,0};
	int may=0;
	int counter=0;
	while(counter<=c){
		pair<int,int> act = q.front();
		visitado[act.first][act.second].first=1;
		q.pop();
		int maytemp=may;
		for(int i=0; i<4; i++){
			if(act.first+dx[i]>0 && act.second+dy[i]>0 && 
			   act.first+dx[i]<n && act.second+dy[i]<n && 
			   visitado[act.first+dx[i]][act.second+dy[i]].first!=1)
			{
				q.push({act.first+dx[i],act.second+dy[i]});
				visitado[act.first+dx[i]][act.second+dy[i]].second=
					visitado[act.first][act.second].second+1;
				maytemp = max(may, visitado[act.first][act.second].second+1);
				counter++;
			}
		}
		if(counter<=c){
			may = maytemp;
		}
	}
	cout<<may<<"\n";
}



