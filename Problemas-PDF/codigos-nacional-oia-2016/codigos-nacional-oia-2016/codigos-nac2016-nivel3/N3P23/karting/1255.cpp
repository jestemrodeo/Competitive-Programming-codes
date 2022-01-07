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
char let[]{'O','S','E','N'};
string rec ="";
pii get(int i,int j){
    pii u = mp(i,j);
    while(best[u.first][u.second]>0){
        forn(i,4){
            pii v = mp(u.first+di[i],u.second+dj[i]);
            if(!out(v))continue;
            if(best[u.first][u.second]==best[v.first][v.second]+1){
                u=v;
                rec+=let[i];
                break;
            }
        }
    }
    return u;
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

    /*forn(i,m){
        forn(j,m)cerr << best[j][i] << " ";
        cerr << endl;
    }*/

    pista = vector<vector<int> >(2, vector<int>(2));

    forn(i,m){
        forn(j,m){
            if(best[i][j]==longest){
                pista[0][1] = j+1;
                pista[0][0] = i+1;
                pii dest = get(i,j);
                pista[1][1] = dest.second+1;
                pista[1][0] = dest.first+1;
                recorrido = rec;
                return longest;
            }
        }
    }








}
