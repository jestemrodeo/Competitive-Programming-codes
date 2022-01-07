#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Nodo{
	bool hayGato;
	bool visitado=false;
	vector<int> hijos;
};

vector<Nodo> tree;

int dfs(int x, int g, const int &mg){
	int resp = 0;
	if(tree[x].hayGato==true){
		//cout<<"gatos++\n";
		g++;
	}
	else{
		g=0;
	}
	if(!(tree[x].hijos.size())>0 && g<=mg){
		return 1;
	}
	else if(g>mg){
		return 0;
	}
	else{
		for(auto h : tree[x].hijos){
			//cout<<"pos: "<<h<<" gatos: "<<g<<"\n";
			if(tree[h].visitado!=true){
				tree[h].visitado=true;
				resp += dfs(h,g,mg);
			}
		}
	}
	return resp;
}

	
///IMPLEMENTAR BIEN VISITADOS
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	int maxCat; cin>>maxCat;
	tree.resize(n+1);
	for(int i=1; i<=n; i++){
		int t; cin>>t;
		if(t){
			tree[i].hayGato = true;
		}
		else{
			tree[i].hayGato = false;
		}
	}
	for(int i=0; i<n-1; i++){
		int x; int y; cin>>x>>y;
		tree[x].hijos.push_back(y);
		tree[y].hijos.push_back(x);
	}
	if((tree[1].hijos.size())==0){
		cout<<0<<"\n";
	}
	else{
		tree[1].visitado=true;
		cout<<dfs(1,0,maxCat)<<"\n";
	}
}

