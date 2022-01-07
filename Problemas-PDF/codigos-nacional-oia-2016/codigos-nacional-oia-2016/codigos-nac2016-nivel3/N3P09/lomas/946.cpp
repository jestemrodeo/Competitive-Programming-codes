#include <vector>

using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();
    
    if (k == 1){
		for ( int i=k; i<M-k; i++){
			for ( int j=k; j<N-k; j++){
				if (t[i][j] > t[i][j-1] && t[i][j] > t[i][j+1] && t[i][j] > t[i-1][j] && t[i][j] > t[i+1][j]){
					if (t[i][j-1] > t[i-1][j-1] && t[i][j-1] > t[i+1][j-1]){
						if (t[i][j+1] > t[i-1][j+1] && t[i][j+1] > t[i+1][j+1] ){
							if (t[i-1][j] > t[i-1][j-1] && t[i-1][j] > t[i-1][j+1]){
								if (t[i+1][j] > t[i+1][j-1] && t[i+1][j] > t[i+1][j+1]){
//									cant++;
//									fil.resize(cant);
//
//									col.resize(cant);
									fil.push_back (i+1);
									col.push_back(j+1);
								}
							}
						}
					}
				} 
			}
		}
	}
}


