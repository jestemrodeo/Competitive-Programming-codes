#include <vector>
#include <string>

using namespace std;

int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{
    int M = barrio.size();
    
    pista = vector<vector<int> >(2, vector<int>(2));
    
    pista[0][0] = 0;
    pista[0][1] = 1;
    
    pista[1][0] = 2;
    pista[1][1] = 3;

    recorrido = "OOO";
    
    return 20;
}
