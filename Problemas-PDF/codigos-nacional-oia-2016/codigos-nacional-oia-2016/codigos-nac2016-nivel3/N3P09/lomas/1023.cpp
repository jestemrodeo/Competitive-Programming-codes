#include <vector>
#include <queue>
#include <utility>
#include <iostream>
#include <cmath>

#define par pair<int, int>
using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();
    queue<par >cola;
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
	else{
		par u;
		int x,y;
		for ( int i=k; i<M-k; i++){
			for ( int j=k; j<N-k; j++){
					if (t[i][j] > t[i][j-1] && t[i][j] > t[i][j+1] && t[i][j] > t[i-1][j] && t[i][j] > t[i+1][j]){
						u = make_pair(i+1,j);
						cola.push(u);
						u = make_pair(i-1,j);
						cola.push(u);
						u = make_pair(i,j+1);
						cola.push(u);
						u = make_pair(i,j-1);
						cola.push(u);
						
					}
					while (!cola.empty()){
						u = cola.front();
						cola.pop();
						x = u.first;
						y = u.second;
						if ( abs(x - i) < k && abs(y - j) < k){
							if (t[x][y] > t[x][y-1] && t[x][y] > t[x][y+1] && t[x][y] > t[x-1][y] && t[x][y] > t[x+1][y]){
							u = make_pair(x+1,y);
							cola.push(u);
							u = make_pair(x-1,y);
							cola.push(u);
							u = make_pair(x,y+1);
							cola.push(u);
							u = make_pair(x,y-1);
							cola.push(u);
							}
							else{
								break;
							}
						}
						else{
							if (x == k){
								if (t[x][y] > t[x][y-1] && t[x][y] > t[x][y+1]){
									u = make_pair(x,y+1);
								cola.push(u);
								u = make_pair(x,y-1);
								cola.push(u);
								}
								else{
									break;
								}
							}
							else{ 
								if ( y == k){
									if (t[x][y] > t[x-1][y] && t[x][y] > t[x+1][y]){
									u = make_pair(x+1,y);
									cola.push(u);
									u = make_pair(x-1,y);
									cola.push(u);
									}
									else{
										cola.pop();
									}
								}
								
							}
						}
						
					}
					if (cola.empty()){
							fil.push_back (i+1);
							col.push_back(j+1);
					}
					else{
						while (!cola.empty()){
							cola.pop();
						}
					}
						
				}
			}
		}
	}
	
	int main()
{
    int M,N,k;
    cin >> M >> N >> k;
    vector<vector<int> > t(M, vector<int>(N));
    for (int i=0;i<M;i++)
    for (int j=0;j<N;j++)
        cin >> t[i][j];
    vector<int> fil,col;
    lomas(t, k, fil, col);
    if (fil.size() != col.size())
    {
        cout << "fil y col deberian tener igual longitud!" << endl;
        cout << "Longitudes: " << fil.size() << "  " << col.size() << endl;
    }
    else
    {
        cout << "En un terreno de " << M << " por " << N << " se localizaron " << fil.size() << " lomas de grado " << k << endl;
        cout << "fil :";
        for (int i=0;i<(int)fil.size(); i++)
            cout << " " << fil[i];
        cout << endl;
        
        cout << "col :";
        for (int i=0;i<(int)col.size(); i++)
            cout << " " << col[i];
        cout << endl;
    }
    return 0;
}


