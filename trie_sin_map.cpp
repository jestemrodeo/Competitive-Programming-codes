#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Nodo{
	int hijo[26];
	
	void iniciar(){
		for(int i=0; i<26; i++){
			hijo[i] = -1;
		}
	}
};
const int largo = 1e7;
int raiz = 0 ; int tam = 0;
Nodo trie[largo];

void agregar(string s){
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	trie[0].iniciar();
	int n; cin>>n;
	for(int i=0; i<n; i++){
		string s; cin>>s;
		agregar(s);
	}
}





