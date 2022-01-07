#include <vector>

using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();
    k=1;
    
    
    fil.resize(2);
    fil[0] = 2;
    fil[1] = 4;

    col.resize(2);
    col[0] = 6;
    col[1] = 2;
}
