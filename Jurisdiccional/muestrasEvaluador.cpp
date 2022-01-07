#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct info{
	int c_analizadas, act;
	vector<bool> analizadas;
};

vector<info> dp; 

info step(vector<vector<int>> const &muestras, int act, vector<bool> analizadas, int c_analizadas){
	info ret;
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
	ret.c_analizadas = c_analizadas;
	ret.act = act;
	ret.analizadas = analizadas;
	return ret;
}
	
	int analizar(vector<vector<int>> &muestras) {
		
		for(int i=0; i<muestras.size(); i++){
			sort(muestras[i].begin(), muestras[i].end());
		}
		
		dp.resize(muestras.size()+1);
		dp[0].c_analizadas = 0;
		dp[0].act = 0;
		dp[0].analizadas.resize(muestras.size(), false);
		
		int ret;
		
		for(int i=1; i<=muestras.size(); i++){
			
			info aux_der = step(muestras, dp[i-1].act+1, dp[i-1].analizadas, dp[i-1].c_analizadas);
			info aux_izq = step(muestras, dp[i-1].act-1, dp[i-1].analizadas, dp[i-1].c_analizadas);
			
			if(aux_der.c_analizadas>aux_izq.c_analizadas){
				dp[i] = aux_der;
			}
			else{
				dp[i] = aux_izq;
			}
			
			if(dp[i].c_analizadas>=muestras.size()){
				ret = i;
				break;
			}
		}
		
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
