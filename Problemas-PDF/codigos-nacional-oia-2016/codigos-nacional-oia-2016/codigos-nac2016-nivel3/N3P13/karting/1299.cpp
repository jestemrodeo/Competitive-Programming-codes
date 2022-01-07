#include <vector>
#include <string>



using namespace std;




int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{

    int M = barrio.size(),R;



    pista = vector<vector<int> >(2, vector<int>(2));



    pista[0][0] = barrio[1][0];
    pista[0][1] = barrio[0][0];

    pista[1][0] = barrio[2][0];
    pista[1][1] = barrio[1][1];

    recorrido = "OOO";

    return R%10;
}
