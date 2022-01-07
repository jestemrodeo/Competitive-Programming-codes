#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;



int step(vector<vector<int>> const &muestras, int act, int p, vector<bool> analizadas, int c_analizadas){
	if(c_analizadas >= muestras.size()) return p-1;
	else if(p>=muestras.size()){
		return p-1;
	}
	int pos;
	if(act>0){
		pos = act;
	}
	else if(act<0){
		pos = muestras.size() + act;
	}
	
	for(int i=0; i<muestras.size(); i++){
		if(analizadas[i] == false){
			int pos_act;
			if (act == 0){
				pos_act = i;
			} 
			else{
				pos_act =  (i + pos) % muestras.size();
			}
			auto it = lower_bound(muestras[i].begin(), muestras[i].end(), pos_act);
			if(it != muestras[i].end() && (*it) == pos_act){
				c_analizadas++;
				analizadas[i] = true;
			}
		}
	}
	cout<<"analizadas: "<<c_analizadas<<"\n";
	p = min(step(muestras, act-1, p+1, analizadas, c_analizadas), 
			step(muestras, act+1, p+1, analizadas, c_analizadas));
	cout<<"p: "<<p<<"\n";
	return p;
}
	
int analizar(vector<vector<int>> &muestras) {
	for(int i=0; i<muestras.size(); i++){
		sort(muestras[i].begin(), muestras[i].end());
	}
	vector<bool> analizadas(muestras.size(), false);
	//step (muestras, izq||der, pasos, analizadas, cantidad de analizadas);
	int ret = step(muestras, 0, 0, analizadas, 0);
	return ret;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<vector<int>> muestras;
	muestras.resize(n);
	for (int i0 = 0; i0 < n; i0++) {
		int auxSize1;
		cin >> auxSize1;
		muestras[i0].resize(auxSize1);
		for (int i1 = 0; i1 < auxSize1; i1++) {
			cin >> muestras[i0][i1];
		}
	}
	int returnedValue;
	returnedValue = analizar(muestras);
	cout << returnedValue << "\n";
	return 0;
}
