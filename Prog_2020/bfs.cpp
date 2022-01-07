#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> grafo;
int cConexiones, cNodos, inicio;
vector<bool> visitados {false};

void entrada(){
	cin>> cNodos >> cConexiones;
	grafo.resize(cNodos+1);
	visitados.resize(cNodos+1);
	for(int i = 0; i < cConexiones; i++){
		int a, b;
		cin>> a>> b;
		grafo[a].push_back(b);
		grafo[b].push_back(a);
	}
	cin>>inicio;
}

void mostrar(){/*
	for(int i = 0; i< (int)grafo.size(); i++){
		for(int j = 0; j< (int)grafo[i].size(); j++){
			cout<< grafo[i][j];
		}
	}*/
	int c=0;
	for(auto i: grafo){
		if(c){
			cout<<c<<": "<<endl;
		}
		c++;
		for(auto j: i){
			cout<<j<<endl;
		}
	}
}
	

queue<int> q;

void bfs(int s){
	q.push(s);
	visitados[s]=true;
	while(!q.empty()){
		int actual = q.front();
		visitados[actual]=true;
		for(int i=0; i<(int)grafo[actual].size(); i++){
			if(!visitados[grafo[actual][i]])
				q.push(grafo[actual][i]);
		}
		cout<<q.front()<<endl;
		q.pop();
	}
}


int main(int argc, char *argv[]) {
	freopen("bfs.in", "r", stdin);
	entrada();
	mostrar();
	cout<<"------------------------------------"<<endl;
	bfs(inicio);
	fclose(stdin);
	return 0;
}

