#include <vector>
#include <string>

using namespace std;
int dc[]= {-1, 0, 1, 0};
int df[]= { 0, -1, 0,1};
int l,largo=0,aux=0;
vector<vector<bool> >v;
void init(int M)
{
    v=vector<vector<bool> >(M,vector<bool>(M));
    l=M;
}
bool valida(int a,int b)
{
    if(a>0 && a<=l && b>0 && b<=l)
        return true;
    return false;
}
void fl(vector<vector<int> > &barrio,int a,int b)
{ int co=0;
    v[a][b]=true;
    int f,c;
    for(int i=0; i<4; i++)
    {
        f=a+df[i];
        c=b+dc[i];
        if(valida(f,c)==false && barrio[f][c]<barrio[a][b])
        {
        co=1;
        fl(barrio,f,c);
        aux++;
        }
        if(co==0)
        {
            largo=max(largo,aux);
            aux--;

        }



    }
}
int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{
    int M = barrio.size();
    int mx=0;

    pista = vector<vector<int> >(2, vector<int>(2));
    init(M);
    for(int f=0; f<M; f++)
        for(int c=0; c<M; c++)
            mx=max(mx,barrio[f][c]);

            for(int f=0; f<M; f++)
            {
            for(int c=0; c<M; c++)
            {
            if(barrio[f][c]==mx)
            {
            fl(barrio,f,c);
            }
            }
            }

recorrido="adsasds";

    return largo;
}
