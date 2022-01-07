#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Nodo {
	int nodo;
	int gen;
	bool hijos = false;
};

vector<vector<int>> v;
vector<Nodo> nodos;
int c_madres;
int max_gen;
int tam;

void inicializar() {
	c_madres = 0;
	max_gen = 0;
	int tam = 1;
	
	Nodo nd;
	nd.nodo = 0;
	nd.gen = 0;
	nodos.push_back(nd);
	v.push_back(vector<int> (0));
}

void mutacion(int madre) {
	//v.resize(tam);
	v.push_back(vector<int> (0));
    v[madre].push_back(tam);
	
	Nodo auxNodo;
	auxNodo.nodo = tam;
	int genAct = nodos[madre].gen+1;
	auxNodo.gen = genAct;
	nodos.push_back(auxNodo);
	
	max_gen = max(max_gen, genAct);
	
	if (nodos[madre].hijos == false){
		nodos[madre].hijos = true;
		c_madres++;
	}
	
	tam++;
}

int madres() {
    return c_madres;
}

int maxgen() {
    return max_gen;
}

int originaria(vector<int> &cepas) {
    return -1;
}
