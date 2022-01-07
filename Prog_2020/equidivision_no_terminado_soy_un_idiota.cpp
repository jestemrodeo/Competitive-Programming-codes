#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> v;
int n;

int dx[4] = {0, 0, 1,-1};
int dy[4] = {1,-1, 0, 0};

bool isValid(int const &a, int const &b){
	return (a<n) && (a>=0) && (b<n) && (b>=0);
}

int solve(pair<int,int> celda, int num){
	int res=0;
	v[celda.first][celda.second]=-1;
	res++;
	for(int i=0; i<4; i++){
		int actx = celda.first+dx[i];
		int acty = celda.second+dy[i];
		if(isValid(actx,acty) && v[actx][acty] == num){
			res += solve(make_pair(actx,acty), num);
		}
	}
	return res;
}

int main() {
	cin>>n;
	v.resize(n+1);
	for(int i=0; i<=n; i++){
		v[i].resize(n+1,-1);
	}
	while(n){
		int cc=0;
		for(int k=0; k<n-1; k++){
			pair<int,int> ini;
			for(int l=0; l<n; l++){
				int a,b; cin>>a>>b;
				if(l==0){
					ini = {a,b};
				}
				v[a][b] = k;
			}
			cc = solve(ini, k);
			if(cc==n-1){
				cout<<"good\n";
			}
			else{
				cout<<"wrong\n";
			}
			
			cout<<"-----------------------------------\n";
		}
		cin>>n;
	}
}

