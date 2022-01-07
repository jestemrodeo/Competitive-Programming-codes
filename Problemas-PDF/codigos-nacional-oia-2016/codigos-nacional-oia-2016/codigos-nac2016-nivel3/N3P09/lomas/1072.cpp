#include <vector>
#include <queue>
#include <utility>
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
							if (x+1 == i){ 
								if (t[x][y] > t[x][y-1] && t[x][y] > t[x][y+1] && t[x][y] > t[x-1][y]){
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
								if (x-1 == i){
									if (t[x][y] > t[x][y-1] && t[x][y] > t[x][y+1]  && t[x][y] > t[x+1][y]){
										u = make_pair(x+1,y);
										cola.push(u);
										u = make_pair(x-1,y);
										cola.push(u);
										u = make_pair(x,y+1);
										cola.push(u);
										u = make_pair(x,y-1);
										cola.push(u);
									}
								} 
								else{
									if (y-1 == j){
										if ( t[x][y] > t[x][y+1] && t[x][y] > t[x-1][y] && t[x][y] > t[x+1][y]){
											u = make_pair(x+1,y);
											cola.push(u);
											u = make_pair(x-1,y);
											cola.push(u);
											u = make_pair(x,y+1);
											cola.push(u);
											
										}
									}
									else{
										if (y+1 == j){
											if (t[x][y] > t[x][y-1]  && t[x][y] > t[x-1][y] && t[x][y] > t[x+1][y]){
												u = make_pair(x+1,y);
												cola.push(u);
												u = make_pair(x-1,y);
												cola.push(u);
												u = make_pair(x,y-1);
												cola.push(u);
											}
										}
									}
								}
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
	
	
