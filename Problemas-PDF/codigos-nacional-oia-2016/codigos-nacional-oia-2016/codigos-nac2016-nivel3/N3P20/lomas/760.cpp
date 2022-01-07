#include <vector>
#include <iostream>

using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();

    t.resize(N);
    for(int i=0; i<M; i++){
        t[i].resize(M);
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){

        }
    }

    fil.resize(3);
    fil[0] = 0;
    fil[1] = 1;
    fil[2] = 2;

    col.resize(3);
    col[0] = 0;
    col[1] = 2;
    col[2] = 1;
}
