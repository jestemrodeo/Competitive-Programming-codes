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
    int may=-1;
    int a=barrio[0][0];
    int iguales=-1;
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(barrio[i][j]!=a)
            iguales=3;
        }
    }

    pista.ini.x = 0;
    pista.ini.y = 0;
    pista.cur.x = 0;
    pista.cur.y = 0;
    pista.fin.x = 0;
    pista.fin.y = 0;
    K = 1000000000;
    return iguales;
}
