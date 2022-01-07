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
    vector<vector<int>>barrio2;
int buscar(int posx,int posy,int r){
if(r<barrio2[posx][posy])
return 0;

return max(max(1+buscar(posx+1,posy,barrio2[posx][posy]),
            1+buscar(posx-1,posy,barrio2[posx][posy])),max(
            1+buscar(posx,posy+1,barrio2[posx][posy]),
            1+buscar(posx,posy-1,barrio2[posx][posy])));
}
int curva(vector<vector<int> > barrio, int &K, Pista &pista)
{
    int M = barrio.size();
    int may=-1;
    int iguales=-1;
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            barrio2[i][j]=barrio[i][j];
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
        int a=buscar(i,j,0);
            if(a>may)
            may=a;

        }
    }

    pista.ini.x = 0;
    pista.ini.y = 0;
    pista.cur.x = 0;
    pista.cur.y = 0;
    pista.fin.x = 0;
    pista.fin.y = 0;
    K = 1000000000;
    return may;
}

