#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define loop(x,n) for(int x=0;x<n;x++)
#define pb push_back
#define ii pair<int,int>
#define vii vector<vi>
#define vp vector<ii>

int dr[4]={-1,0,1,0};
int dc[4]={0,1,0,-1};
int m,n,ki;
vector<vector<bool> > visit;

bool comp(ii a,ii b)
{
    if(a.first!=b.first)return a.first<b.first;
    return a.second<b.second;
}
bool ok(int x,int y)
{
    return(x<n&&y<m&&x>=0&&y>=0);
}
bool valid(int x,int y,int x1,int y1,int sx,int sy)
{
    int a=abs(x-sx)+abs(y-sy);
    int b=abs(x1-sx)+abs(y1-sy);
    return a<b;
}

int dfs(int x,int y,int sx,int sy,vii &grid)
{
    loop(k,4)
    {
        int x1=dr[k]+x;
        int y1=dc[k]+y;
        if(!ok(x1,y1)||abs(x1-sx)>ki||abs(y1-sy)>ki||!valid(x,y,x1,y1,sx,sy))continue;

        if(grid[x1][y1]>=grid[x][y])return 0;
        bool tmp=dfs(x1,y1,sx,sy,grid);
        if(!tmp)return 0;
    }
    return 1;
}
void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    ki=k;
    n = t.size();
    m = t[0].size();

    vp ans;
    /*visit.resize(n);
    loop(x,n)
    {
        visit[x].resize(n);
        loop(y,n)visit[x][y]=0;
    }
    loop(x,n)
    {
        loop(y,m)printf("%d ",t[x][y]);
        printf("\n");
    }*/


    for(int x=k;x<n-k;x++)
    {
        for(int y=k;y<m-k;y++)
        {
            if(dfs(x,y,x,y,t))
            {
                ans.pb(ii(x,y));
            }
        }
    }
    sort(ans.begin(),ans.end(),comp);
    /*printf("%d\n",ans.size());
    loop(x,ans.size())
    {
        printf("%d %d\n",ans[x].first,ans[x].second);
    }*/

    fil.resize(ans.size());
    col.resize(ans.size());
    loop(x,ans.size())fil[x]=ans[x].first+1;
    loop(x,ans.size())col[x]=ans[x].second+1;
}
