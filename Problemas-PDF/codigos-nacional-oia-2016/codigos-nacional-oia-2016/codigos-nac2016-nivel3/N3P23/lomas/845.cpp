#include <bits/stdc++.h>

using namespace std;


#define forsn(i,s,n) for(int i = (int)(s);i < (int)(n);i++)
#define forn(i,n) for(int i = 0;i < (int)(n);i++)
#define mp make_pair
#define pb push_back
typedef pair<int,int> pii;

const int MAXM=1000+10,MAXN=1000+10;
int m,n;
vector<vector<int> > mat;
int di[]{-1, 0,+1, 0};
int dj[]{ 0,+1, 0,-1};

bool out(pii a){
    return 0 <= a.first && a.first< m && 0 <= a.second && a.second< n;
}

int dist(pii a, pii b){
    return abs(a.first-b.first) + abs(a.second-b.second);
}

bool bfs(pii r,int k){
    queue<pii> q;
    q.push(r);
    while(!q.empty()){
        pii u = q.front();
        q.pop();
        forn(i,4){
            pii v = mp(u.first+di[i],u.second+dj[i]);
            if(!out(v))continue;
            if(abs(r.first-v.first)>k || abs(r.second-v.second)>k)continue;
            if(dist(r,v)<dist(r,u)){
                if(mat[u.first][u.second]>=mat[v.first][v.second])return false;
            }
            else q.push(v);
        }
    }
    return true;
}

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    m = t.size();
    n = t[0].size();

    mat=t;

    forsn(i,k,m-k){
        forsn(j,k,n-k){
            if(bfs(mp(i,j),k)){
                fil.pb(i+1);
                col.pb(j+1);
            }
        }
    }

    /*fil.resize(3);
    fil[0] = 0;
    fil[1] = 1;
    fil[2] = 2;

    col.resize(3);
    col[0] = 0;
    col[1] = 2;
    col[2] = 1;*/
}
