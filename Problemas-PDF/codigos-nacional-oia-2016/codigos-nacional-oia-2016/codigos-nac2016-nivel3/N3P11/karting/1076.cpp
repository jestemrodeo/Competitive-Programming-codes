#include <vector>
#include <string>

using namespace std;

int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{
    int M = barrio.size();
    
    pista = vector<vector<int> >(2, vector<int>(2));
    
    pista[0][0] = barrio.size();
    pista[0][1] = barrio.size();
    
    pista[1][0] = barrio.size();
    pista[1][1] = barrio.size();

    recorrido = "";
    
    return 0;
}
