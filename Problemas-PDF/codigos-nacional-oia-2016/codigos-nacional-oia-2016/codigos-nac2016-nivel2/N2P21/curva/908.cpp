#include <vector>
#include <cmath>
#include <algorithm>
#define forn(i,n) for(int i=0;i<int(n);++i)

using namespace std;

struct Esquina
{
    int x,y;
    bool operator <(Esquina b) const{return x<b.x;}
};

struct Pista
{
    Esquina ini, cur, fin;
};

struct hola{
    bool i,d,ar,ab;
};

const int maxn=3000;

int maxi[maxn][maxn];
int maxd[maxn][maxn];
int maxar[maxn][maxn];
int maxab[maxn][maxn];
hola c[maxn][maxn];
int m;


int maximoi(Esquina a,vector<vector<int>> M){
    Esquina b;
    b={a.x-1,a.y};
    if(b.x<1||b.x>m||b.y<1||b.y>m) return maxi[a.x][a.y];
    if(M[a.x][a.y]>M[b.x][b.y]){
        if(c[a.x][a.y].i==1) return maxi[a.x][a.y];
        c[a.x][a.y].i=1;
        return maxi[a.x][a.y]=maximoi(b,M)+1;}
    return maxi[a.x][a.y];
}
int maximod(Esquina a,vector<vector<int> > M){
    Esquina b;
    b={a.x+1,a.y};
    if(M[a.x][a.y]>M[b.x][b.y]){
        if(c[a.x][a.y].d==1) return maxd[a.x][a.y];
        c[a.x][a.y].i=1;
        return maxi[a.x][a.y]=maximod(b,M)+1;}
    return maxd[a.x][a.y];
}
int maximoar(Esquina a,vector<vector<int> > M){
    Esquina b;
    b={a.x,a.y+1};
    if(M[a.x][a.y]>M[b.x][b.y]){
        if(c[a.x][a.y].i==1) return maxi[a.x][a.y];
        c[a.x][a.y].i=1;
        return maxi[a.x][a.y]=maximoi(b,M)+1;}
    return maxi[a.x][a.y];
}
int maximoab(Esquina a,vector<vector<int> > M){
    Esquina b;
    b={a.x,a.y-1};
    if(M[a.x][a.y]>M[b.x][b.y]){
        maxar[b.x][b.y]=maximoab(b,M)+1;
        return maxab[a.x][a.y]=maxar[b.x][b.y];}
    maxab[a.x][a.y]=maxar[b.x][b.y];
    return maxab[a.x][a.y];
}

int largo(Pista p){
    int r=0;
    r+=abs(p.ini.y-p.cur.y);
    r+=abs(p.cur.x-p.fin.x);
    return r;
}


int curva(vector<vector<int> > barrio, int &K, Pista &pista)
{
    vector<Esquina> aux;
    Pista a;
    int mh,mv,may=0,z;
    K=0;
    int M = barrio.size();
    m=M;
    forn(i,M){
        forn(j,M){
            mh=-1;
            mv=-1;
            aux.push_back({maximoi({i,j},barrio),1});
            aux.push_back({maximod({i,j},barrio),2});
            aux.push_back({maximoar({i,j},barrio),3});
            aux.push_back({maximoab({i,j},barrio),4});
            sort(aux.begin(),aux.end());
            if(aux[0].y==1){
                mh=-aux[0].x;
            }if(aux[0].y==2&&mh==-1){
                mh=aux[0].x;
            }if(aux[0].y==3&&mv==-1){
                mv=aux[0].x;
            }if(aux[0].y==4&&mh==-1){
                mv=-aux[0].x;
            }if(aux[1].y==1&&mh==-1){
                mh=-aux[0].x;
            }if(aux[1].y==2&&mh==-1){
                mh=aux[0].x;
            }if(aux[1].y==3&&mv==-1){
                mv=aux[0].x;
            }if(aux[1].y==4&&mh==-1){
                mv=-aux[0].x;
            }if(aux[2].y==1&&mh==-1){
                mh=-aux[0].x;
            }if(aux[2].y==2&&mh==-1){
                mh=aux[0].x;
            }if(aux[2].y==3&&mv==-1){
                mv=aux[0].x;
            }if(aux[2].y==4&&mh==-1){
                mv=-aux[0].x;
            }
            if(mh!=0&&mv!=0) K++;
            a={{i,j+mv},{i,j},{i+mh,j}};
            z=largo(a);
            if(z>may) {may=z;pista=a;}
        }
    }
    if(may==0) return -1;
    return may;
}
