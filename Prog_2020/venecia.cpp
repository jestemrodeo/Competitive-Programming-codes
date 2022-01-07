#include <iostream>
using namespace std;

vector<vector<int>> grafo;
int cEsquinas, cCuadras, inicio;


void read(){
	
	cin>>cEsquinas>>cCuadras>>inicio;
	
	for(int i = 0; i<cCuadras; i++){
		int a, b;
		cin>>a>>b;
		grafo[a].push_back(b);
		grafo[b].push_back(a);
	}
}
	

int main(int argc, char *argv[]) {
	
	freopen("venecia.in","r", stdin);
	
	read();
	
	fclose(stdin);
	return 0;
}

