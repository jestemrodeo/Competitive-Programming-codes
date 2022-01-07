#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
vector<vector<char>> v;

int dfs(int x, int y, char act, vector<vector<bool>> &visitado){
	if(x<0 or y<0 or y>=(int)v.size() or x>=(int)v.size() or visitado[x][y] or v[x][y]!=act){
		return 0;
	}
	visitado[x][y]=true;
	int pintados = 1;
	if(act=='0'){
		v[x][y]='1';
	}
	else{
		v[x][y]='0';
	}
	for(int i=0; i<4; i++){
		pintados += dfs(x+dx[i], y+dy[i], act, visitado);
	}
	return pintados;
}
int pintar(vector<vector<char>> &v,int n){
	char act=v[0][0];
	bool f=true;
	int cant=0;
	while(f){
		vector<vector<bool>> visitado(v.size(),vector<bool>(v.size(), 0));
		int pintados = dfs(0,0,act,visitado);
		cant++;
		
		act=v[0][0];
		if(pintados==(n*n)){
			f=false;
		}
	}
	return cant;
}
	
int main(){
	freopen("uniformar.in", "r", stdin);
	freopen("uniformar.out", "w", stdout);
	int n;
	cin>>n;
	v.resize(n);
	for(int i=0; i<n; i++){
		v[i].resize(n);
		for(int j=0; j<n; j++){
			cin>>v[i][j];
		}
	}
	cout<<pintar(v,n)-1;
	fclose(stdin);
	fclose(stdout);
}
