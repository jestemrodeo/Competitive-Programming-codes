#include <vector>

using namespace std;

struct Esquina
{
    int x,y;
};

struct Pista
{
    Esquina ini, cur, fin;
};

int curva(vector<vector<int> > barrio, int &K, Pista &pista)
{
    int M = barrio.size();
    pista.ini.x = 0;
    pista.ini.y = 0;
    pista.cur.x = 0;
    pista.cur.y = 0;
    pista.fin.x = 0;
    pista.fin.y = 0;
    K = 1000000000;
    return 42;
}
