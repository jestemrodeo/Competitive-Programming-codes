#include <vector>
#include <queue>

using namespace std;

struct nodo {
    int x, y;

    nodo(int x_, int y_): x(x_), y(y_) {}
};

vector<vector<int> > G;

/*
bool BFS(int x, int y, int k) {
    queue<nodo> Q;
    Q.push(nodo(x, y));

    while (!Q.empty()) {
        int dx, dy;
        nodo n = Q.front(); Q.pop();

        dx = n.x > x ? 1 : n.x < x ? -1 : 0;
        dy = n.y > y ? 1 : n.y < y ? -1 : 0;

        if (G[x][y] > G[x+dx][y+dy]) {
            Q.push(nodo(x+dx, y+dy));
        } else {
            return false;
        }
    }

    return true;
}
*/

bool BFS(int x, int y, int k) {
    if (G[x][y] > G[x+1][y])
    if (G[x][y] > G[x-1][y])
    if (G[x][y] > G[x][y+1])
    if (G[x][y] > G[x][y-1])
    if (G[x+1][y] > G[x+1][y+1])
    if (G[x+1][y] > G[x+1][y-1])
    if (G[x-1][y] > G[x-1][y+1])
    if (G[x-1][y] > G[x-1][y-1])
    if (G[x][y+1] > G[x+1][y+1])
    if (G[x][y+1] > G[x-1][y+1])
    if (G[x][y-1] > G[x+1][y-1])
    if (G[x][y-1] > G[x-1][y-1])
        return true;

    return false;
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
