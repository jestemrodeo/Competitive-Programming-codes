#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int dfs(int x, int k, int s, vector<int> siguiente){
	if(k>s){
		return dfs(siguiente[x],k,s+1, siguiente);
	}
	return x;
}

vector<int> tutubo(vector<int> &siguiente, vector<int> &preguntaX, vector<long long> &preguntaK) {
	vector<int> ret;
	if(preguntaK.size()==1){
		s
	}
	for(int i=0; i<preguntaK.size(); i++){
		ret.push_back(dfs(preguntaX[i],preguntaK[i], 0, siguiente));
	}
	return ret;
}
