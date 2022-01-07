#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> visitados(200,vector<bool> (200));


int DALE_PINTA(vector<string> &m, char c, vector<vector<bool>> visitados){
	int ec=0;
	pair<int,int> act;
	queue<pair<int, int>> r;
	r.push(make_pair(0,0));
	int dx[4]={-1,1,0,0};
	int dy[4]={0,0,1,-1};
	int nx,ny;
	while(!r.empty()){
		act=r.front();
		visitados[act.first][act.second]=true;
		r.pop();
		for(int i=0;i<4;i++){
			nx=act.first+dx[i];
			ny=act.second+dy[i];
			if(nx<m.size() and ny<m.size() and nx>=0 and ny>=0 and 
			   visitados[nx][ny]!=true and m[nx][ny]==c){
				r.push(make_pair(nx,ny));
			}
		}
		if(c=='0'){
			m[act.first][act.second]='1';
		}
		else{
			m[act.first][act.second]='0';
		}
		ec++;
	}
	return ec;
}
int pintar(vector<string> &m,int n){
	int c=0;
	int s=0;
	while (s<(int)((n*n)-1)){
		if(m[0][0]=='0'){
			s=DALE_PINTA(m, '0', visitados);
		}
		else{
			s=DALE_PINTA(m, '1', visitados);
		}
		c++;
	}
	return c;
}


int main() {
	freopen ("uniformar.in","r",stdin);
	//freopen ("uniformar.out", "w",stdout);
	int n;
	cin>>n;
	vector<string> m(n);
	for(int i=0; i<n; i++){
		cin>>m[i];
	}
	cout<<pintar(m,n)<<endl;
	fclose(stdin);
	//fclose(stdout);
	return 0;
}

