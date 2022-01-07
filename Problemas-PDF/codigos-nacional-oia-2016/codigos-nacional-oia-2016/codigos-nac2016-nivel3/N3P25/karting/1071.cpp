#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

#define vi vector<int>
#define loop(x,n) for(int x=0;x<n;x++)
#define pb push_back
#define ii pair<int,int>
#define vii vector<vi>


int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
char dir[4]={'O','S','E','N'};
int p[3100][3100],dp[3100][3100];
int n;

bool ok(int x,int y)
{
    return(x<n&&y<n&&x>=0&&y>=0);
}

int dfs(int x,int y,vii &grid)
{
    int &best=dp[x][y];
    if(best!=-1)return best;
    best=0;
    p[x][y]=-1;
    loop(k,4)
    {
        int x1=dr[k]+x;
        int y1=dc[k]+y;
        if(!ok(x1,y1)||grid[x1][y1]>=grid[x][y])continue;

        int tmp=dfs(x1,y1,grid)+1;
        if(tmp>best)
        {
            best=tmp;
            p[x][y]=k;
        }
    }
    return best;
}

int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{
    pista = vector<vector<int> >(2, vector<int>(2));
    if(barrio.size()==0)
    {
        pista[0][0] = 1;
        pista[0][1] = 1;

        pista[1][0] = 1;
        pista[1][1] = 1;

        recorrido = "";
        return 0;
    }
    n = barrio.size();
    /*vii barrio2(n,vi(n));
    loop(x,n)
    {
        loop(y,n)
        {
            barrio2[x][y]=barrio[y][x];
        }
    }*/

    loop(x,n)loop(y,n)
    {
        dp[x][y]=-1;
        p[x][y]=-1;
    }
    int maxi=1;
    int i=0;
    int j=0;
    loop(x,n)loop(y,n)
    {
        int tmp=dfs(x,y,barrio);
        if(tmp>maxi)
        {
            maxi=tmp;
            i=x;
            j=y;
        }
    }
//    printf("%d %d %d\n",maxi,i,j);

    int u=i;
    int v=j;
    int e1=i;
    int e2=j;
    string ans;
    while(u!=-1&&j!=-1)
    {
        if(p[u][v]==-1)
        {
            e1=u;
            e2=v;
            break;
        }
//        printf("u:%d v:%d\n",u,v);
        ans+=dir[p[u][v]];

        int o=u;
        int t=v;
        if(p[o][t]==-1)break;
        u+=dr[p[o][t]];
        v+=dc[p[o][t]];
    }
//    cout<<ans<<endl;
    /*loop(x,n)
    {
        loop(y,n)
        {
            printf("%d ",barrio2[x][y]);
        }
        printf("\n");
    }
    printf("bario %d\n",barrio2[i][j]);*/
    /*loop(x,n)
    {
        loop(y,n)
        {
            printf("%d ",barrio[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    loop(x,n)
    {
        loop(y,n)
        {
            printf("%d ",barrio[x][y]);
        }
        printf("\n");
    }*/

    pista[0][0] = j+1;
    pista[0][1] = i+1;

    pista[1][0] = e2+1;
    pista[1][1] = e1+1;

    recorrido = ans;
    if(i==e1&&j==e2)maxi=0;

    return maxi;
}
