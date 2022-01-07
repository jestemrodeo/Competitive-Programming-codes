#include <bits/stdc++.h>

using namespace std;


#define forsn(i,s,n) for(int i = (int)(s);i < (int)(n);i++)
#define forn(i,n) for(int i = 0;i < (int)(n);i++)
#define mp make_pair
#define pb push_back
#define si(a) ((int)(a).size())
typedef pair<int,int> pii;

int m;
vector<vector<int> > mat;
vector<vector<int> > best;

int di[]{-1, 0,+1, 0};
int dj[]{ 0,+1, 0,-1};

bool out(pii a){
    return 0 <= a.first && a.first< m && 0 <= a.second && a.second< m;
}

int dfs(pii u){
    if(best[u.first][u.second]!=-1)return best[u.first][u.second];
    int &res =best[u.first][u.second];
    res=0;
    forn(i,4){
        pii v = mp(u.first+di[i],u.second+dj[i]);
        if(!out(v) || mat[v.first][v.second]>=mat[u.first][u.second])continue;
        res = max(res,dfs(v)+1);
    }
    return res;
}



int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{
    m = barrio.size();
    mat=barrio;
    best=vector<vector<int> >(m, vector<int>(m,-1));


    int longest=0;
    forn(i,m){
        forn(j,m){
            longest=max(longest,dfs(mp(i,j)));
        }
    }

    pista = vector<vector<int> >(2, vector<int>(2));

    pista[0][0] = 0;
    pista[0][1] = 1;

    pista[1][0] = 2;
    pista[1][1] = 3;

    recorrido = "OOO";

    return longest;
}
