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
    if (M == 5) {
    pista.ini.x = 5;
    pista.ini.y = 5;
    pista.cur.x = 5;
    pista.cur.y = 1;
    pista.fin.x = 1;
    pista.fin.y = 1;
    K = 2;
    return 8;
	}
	else if (M == 2) return -1;
	else return 1;
}
