#include <string>
#include <vector>
#include <queue>

using namespace std;

struct r {
	int tam = -1;
	vector<int> res;
};

vector<bool> vis;
vector<bool> esCiclo;
vector<r> ciclos;

queue <int> q;

int resp (int &x, int &k, int &s, int const &siguiente){
	if(esCiclo[x]){
		int t = k % ciclos[x].tam+1;
		return ciclos[x].res[t];
	}
	if(k == s){
		return x;
	}
	s++;
	return resp(siguiente[x], k, s, siguiente) + 1;
}
void ciclo (){
	vector<int> respuesta;
	int x = q.top();
	respuesta.push_back((q.top());
	esCiclo[q.top()]=true;
	q.pop();
	int tamC = 0;
	while(q.top()!=x){
		respuesta.push_back(q.top());
		esCiclo[q.top()]=true;
		q.pop();
		++tamC;
	}
	ciclos[x] = { tamC, respuesta };
}
		
void dfs(int a, vector<int> &siguiente){
	q.push(a);
	if(vis[a]==true && ciclos[a].tam==-1){
		ciclo();
		vis[a]=true;
	}
	else{
		vis[a]=true;
		dfs(siguiente[a], siguiente);
	}
}
			
vector<int> tutubo(vector<int> &siguiente, vector<int> &preguntaX, vector<long long> &preguntaK) {
	vis.resize(siguiente.size(),false);
	esCiclo.resize(siguiente.size(),false);
				
	for(int i=0; i<siguiente.size(); i++){
		if(vis[i]==false) dfs(i, siguiente, 0);
	}
				
	for(int i=0; i<preguntaK.size(); i++){
		int x = preguntaX[i];
		int k = preguntaK[i];
		if(esCiclo[x]){
			int t = k % ciclos[x].tam+1;
			cout<<ciclos[x].res[t]<<"\n";
		}
	else{
		cout<<resp(x,k,0,siguiente)<<endl;
	}
}
}
