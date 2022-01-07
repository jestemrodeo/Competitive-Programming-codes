#include <bits/stdc++.h>

using namespace std;

string s;
int max_jump;
/* Time limit
void dfs(int pos, int jump){
	if(dist[pos]==-1){
		dist[pos]=jump;
	}
	else{
		dist[pos] = min(dist[pos],jump);
	}
	for(int i=min(pos+max_jump, (int)s.length()-1);i>=pos+1; i--){
		if(s[i]=='1'){
			dfs(i,++jump);
		}
	}
}
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n>>max_jump;
	cin>>s;
	vector<int> dist(n,-1);
	dist[0]=0;
	queue <int> q;
	q.push(0);
	while(!q.empty()){
		int pos = q.front();
		q.pop();
		for(int i=min(pos+max_jump,(int)s.length()); i>pos; i--){
			if(s[i]=='1' and dist[i]==-1){
				q.push(i);
				dist[i]=dist[pos]+1;
			}
		}
	}
	//dfs(0,0);
	cout<<dist[n-1]<<"\n";
}

