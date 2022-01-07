#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> tutubo(vector<int> &siguiente, vector<int> &preguntaX, vector<long long> &preguntaK) {
	vector<int> ret;
	for(int i=0; i<preguntaK.size(); i++){
		if(preguntaK[i]==1){
			ret.push_back(siguiente[preguntaX[i]]);
		}
	}
	return ret;
}

