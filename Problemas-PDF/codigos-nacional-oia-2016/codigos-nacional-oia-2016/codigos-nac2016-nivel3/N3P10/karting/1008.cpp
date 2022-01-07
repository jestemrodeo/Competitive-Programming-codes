#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct nodo {
    bool v[4];
    bool visto;
};

char dir[4] = { 'O', 'E', 'S', 'N' };
int offset[4][2] = { {0, -1}, {0, 1}, {1, 0}, {-1, 0} };
vector<vector<int> > pos(2, vector<int>(2));

vector<vector<nodo> > G(4000, vector<nodo>(4000));

int maxl = 0;
string path;

void dfs(int ix, int iy, int x, int y, int n, string p) {
    G[y][x].visto = true;

    if (n > maxl) {
        maxl = n;
        path = p;

        pos[1][0] = y+1;
        pos[1][1] = x+1;

        pos[0][0] = iy+1;
        pos[0][1] = ix+1;
    }

    for (int d=0;d<4;++d) {
        if (G[y][x].v[d]) {
            dfs(ix, iy, x+offset[d][0], y+offset[d][1], n+1, p+dir[d]);
        }
    }
}

int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido) {
    int M = barrio.size();

    //init
    for (int i=0;i<M;++i)
        for (int j=0;j<M;++j) {
            G[i][j].visto = false;
            for (int k=0;k<4;++k) G[i][j].v[k] = false;
        }

    //gen graph
    for (int i=0;i<M;++i)
        for (int j=0;j<M;++j)
            for (int d=0;d<4;++d)
                if (i+offset[d][1] >= 0 && i+offset[d][1] < M && j+offset[d][0] >= 0 && j+offset[d][0] < M)
                if (barrio[i][j] > barrio[i+offset[d][1]][j+offset[d][0]]) {
                    G[i][j].v[d] = true;
                }

    //DFS
    for (int i=0;i<M;++i)
        for (int j=0;j<M;++j)
            if (!G[i][j].visto)
                dfs(j, i, j, i, 0, "");

    pista = pos;

    recorrido = path;

    return maxl;
}
