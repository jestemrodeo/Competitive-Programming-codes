#include <vector>

using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();
    
    fil.resize(3);
    fil[0] = 0;
    fil[1] = 1;
    fil[2] = 2;
    
    col.resize(3);
    col[0] = 0;
    col[1] = 2;
    col[2] = 1;
    
    if (k == 1){
		for ( int i=k+1; i<N-k; i++){
			for ( int j=k+1; j<M-k; j++){
				if (t[i][j] > t[i][j-1] && t[i][j] > t[i][j+1] && t[i][j] > t[i-1][j] && t[i][j] > t[i+1][j]){
					if (t[i][j-1] > t[i-1][j-1] && t[i][j-1] > t[i+1][j-1]){
						if (t[i][j+1] > t[i-1][j+1] && t[i][j+1] > t[i+1][j+1] ){
							if (t[i-1][j] > t[i-1][j-1] && t[i-1][j] > t[i-1][j+1]){
								if (t[i+1][j] > t[i+1][j-1] && t[i+1][j] > t[i+1][j+1]){
									fil.push_back (i);
									col.push_back(j);
								}
							}
						}
					}
				} 
			}
		}
	}
}
