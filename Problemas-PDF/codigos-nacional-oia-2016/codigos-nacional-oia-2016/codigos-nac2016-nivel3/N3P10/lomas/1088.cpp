#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct nodo {
    int x, y;

    nodo(int x_, int y_): x(x_), y(y_) {}
};

vector<vector<int> > G;
bool visto[2000][2000];

int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

bool inside(int x, int y, int cx, int cy, int w) {
    int minx = cx - w;
    int miny = cy - w;
    int maxx = cx + w;
    int maxy = cy + w;

    if (x >= minx && x <= maxx && y >= miny && y <= maxy)
        return true;

    return false;
}

bool BFS(int x, int y, int k) {
    for (int i=0;i<2000;++i)
        for (int j=0;j<2000;++j)
            visto[i][j] = false;

    queue<nodo> Q;
    Q.push(nodo(x, y));
    visto[x][y] = true;

    while (!Q.empty()) {
        nodo n = Q.front(); Q.pop();
        visto[n.x][n.y] = true;

        for (int d=0;d<4;++d) {
            if (inside(n.x+dir[d][0], n.y+dir[d][1], x, y, k) && !visto[n.x+dir[d][0]][n.y+dir[d][1]]) {
                if (G[n.x][n.y] > G[n.x+dir[d][0]][n.y+dir[d][1]]) {
                    if (!visto[n.x+dir[d][0]][n.y+dir[d][1]])
                        Q.push(nodo(n.x+dir[d][0], n.y+dir[d][1]));
                } else {
                    return false;
                }
            }
        }
    }

    return true;
}

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col) {
    int M = t.size();
    int N = t[0].size();
    G = t;

    for (int i=k;i<M-k;++i)
        for (int j=k;j<N-k;++j)
            if (BFS(i, j, k)) {
                fil.push_back(i+1);
                col.push_back(j+1);
            }

}
