#include <bits/stdc++.h>

using namespace std;

struct mancha{
	int izq=-1;
	int der=-1;
	int arr=-1;
	int aba=-1;
	pair<int> arrizq = {-1,-1};
	pair<int> abader = {-1,-1};
};

int N,M,mt;
vector<mancha> m(3);
pair<int,int> ult;
int dx[] = {0,-1,0,1};
int dy[] = {-1,0,1,0};

bool esValido(const int &a, const int &b){
	return (a>=0)&&(b>=0)&&(a<N)&&(b<M);
}


void floodfill(int x, int y, vector<string> &v){
	char c = mt + 'A';
	v[x][y] = c;
	if(m[mt].izq == -1){
		m[mt].izq = y;
	}
	else{
		m[mt].izq = min(m[mt].izq, y); 
	}
	if(m[mt].der == -1){
		m[mt].der = y;
	}
	else{
		m[mt].der = max(m[mt].der, y); 
	}
	if(m[mt].arr == -1){
		m[mt].arr = y;
	}
	else{
		m[mt].arr = min(m[mt].arr, x); 
	}
	if(m[mt].aba == -1){
		m[mt].aba = y;
	}
	else{
		m[mt].aba = max(m[mt].aba, x); 
	}
	ult = {x,y};
	for(int i=0; i<4; i++){
		int actx = x + dy[i]; // estan cambiados
		int acty = y + dx[i];
		if(esValido(actx,acty)&&v[actx][acty]=='X'){
			floodfill(actx,acty,v);
			ult = {actx,acty};
		}
	}
}

int cow_beauty(vector <string> v){
	int ret;
	mt = 0;
	N = v.size();
	M = v[0].size();
	for(int i=0; i<v.size; i++){
		for(int j=0; j<v[i].size(); j++){
			if(v[i][j]=='X') {
				floodfill(i,j,v);
				m[mt].arrizq = {i,j};
				m[mt].abader = ult;
 			}
			mt++;
		}
	}
	
	return ret;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M;
	cin >> N >> M;
	
	vector <string> v(N);
	for(int i=0; i<N; i++)
		cin >> v[i];
	
	cout << cow_beauty(v) << endl;
	
	return 0;
}
