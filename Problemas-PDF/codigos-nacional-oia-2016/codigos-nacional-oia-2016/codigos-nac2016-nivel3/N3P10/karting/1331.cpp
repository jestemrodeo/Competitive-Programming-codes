#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct nodo {
    bool v[4];
    bool visto;
    int M;
    string path;
    int ox, oy;
};

char dir[4] = { 'O', 'E', 'S', 'N' };
int offset[4][2] = { {0, -1}, {0, 1}, {1, 0}, {-1, 0} };
vector<vector<int> > pos(2, vector<int>(2));

vector<vector<nodo> > G(4000, vector<nodo>(4000));

int maxl = 0;
string path;

int dfs(int x, int y) {
    G[y][x].visto = true;

    if (!G[y][x].v[0] && !G[y][x].v[1] && !G[y][x].v[2] && !G[y][x].v[3]) {
        G[y][x].M = 0;
        G[y][x].path = "";
        G[y][x].ox = x;
        G[y][x].oy = y;
        return 0;
    }

    int mm = 0;
    for (int d=0;d<4;++d) {
        if (G[y][x].v[d]) {
            if (!G[y+offset[d][1]][x+offset[d][0]].visto)
                dfs(x+offset[d][0], y+offset[d][1]);

            if (G[y+offset[d][1]][x+offset[d][0]].M+1 > mm) {
                mm = G[y+offset[d][1]][x+offset[d][0]].M+1;
                G[y][x].path = G[y+offset[d][1]][x+offset[d][0]].path+dir[d];
                G[y][x].ox = G[y+offset[d][1]][x+offset[d][0]].ox;
                G[y][x].oy = G[y+offset[d][1]][x+offset[d][0]].oy;
            }
        }
    }

    G[y][x].M = mm;
    return mm;
}

int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido) {
    int M = barrio.size();

    //init
    for (int i=0;i<M;++i)
        for (int j=0;j<M;++j) {
            G[i][j].visto = false;
            G[i][j].M = 0;
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
                dfs(j, i);

    for (int i=0;i<M;++i)
        for (int j=0;j<M;++j) {
            if (G[i][j].M > maxl) {
                 maxl = G[i][j].M;
                 pos[1][0] = G[i][j].oy+1;
                 pos[1][1] = G[i][j].ox+1;
                 pos[0][0] = i+1;
                 pos[0][1] = j+1;
                 recorrido = G[i][j].path;
            }
        }

    pista = pos;


    return maxl;
}
