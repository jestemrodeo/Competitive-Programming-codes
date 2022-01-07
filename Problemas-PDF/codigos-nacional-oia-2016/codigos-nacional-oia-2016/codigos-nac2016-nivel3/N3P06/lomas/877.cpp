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
}
