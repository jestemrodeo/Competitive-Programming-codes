#include <vector>
#include <iostream>
#include <utility>

#define INF 2000000000

using namespace std;

struct Esquina{
    int x,y;
};

struct Pista {
    Esquina ini, cur, fin;
};

struct DFSReturn {
	int maxLength;
	vector<Esquina> path;
	Pista pista;
};

/*

3
4 3 1
5 1 1
1 3 2

*/

vector<vector<int> > map;
int dfsMap [3000][3000][2][4];

void showPath(vector<Esquina> path) {
	for (int i = 0; i < (int) path.size(); i++) cout << map[path[i].x][path[i].y] << " ";
	cout << endl;
}

DFSReturn dfs(int x, int y, bool canTurn, int direction, vector<Esquina> path) {
	if (dfsMap[x][y][canTurn ? 1 : 0][direction] != 0) {
		DFSReturn j;
		j.maxLength = dfsMap[x][y][canTurn ? 1 : 0][direction];
		return j;
	}
	
	int dirx[4] = {0, 0, -1, 1};
	int diry[4] = {-1, 1, 0, 0};
	
	Esquina e;
	e.x = x;
	e.y = y;
	
	path.push_back(e);

	DFSReturn r;
	
	if (canTurn) {
		for (int i = 0 + (direction < 2 ? 2 : 0); i < 2 + (direction < 2 ? 2 : 0); i++) {
			if (map[x + dirx[i]][y + diry[i]] < map[x][y]) {
				DFSReturn t = dfs(x + dirx[i], y + diry[i], false, i, path);
				if (t.maxLength > r.maxLength) {
					r = t;
					r.pista.cur.y = y;
					r.pista.cur.x = x;
				}
			}
		}
	}
	
	if (map[x + dirx[direction]][y + diry[direction]] < map[x][y]) {
		DFSReturn t = dfs(x + dirx[direction], y + diry[direction], canTurn, direction, path);
		if (t.maxLength > r.maxLength) r = t;
	}
	
	r.maxLength++;
	r.path = path;
	
	dfsMap[x][y][canTurn ? 1 : 0][direction] = r.maxLength;
	
	return r;
}

int curva(vector<vector<int> > barrio, int &K, Pista &pista) {
	for (int i = 0; i < 3000; i++) {
		for (int j = 0; j < 3000; j++) {
			for (int k = 0; k < 2; k++) {
				for (int l = 0; l < 4; l++) {
					dfsMap[i][j][k][l] = 0;
				}
			}
		}
	}
	
	map.resize(barrio.size() + 10);
	for (int i = 0; i <= (int) barrio.size() + 1; i++) {
		map[i].resize((int) barrio.size() + 10);
		for (int j = 0; j <= (int) barrio.size() + 1; j++) {
			if (i == 0 || j == 0 || i > (int) barrio.size() || j > (int) barrio.size()) {
				map[i][j] = INF;
			} else {
				map[i][j] = barrio[i - 1][j - 1];
			}
		}
	}
	
	int maxPath = 0;
	
	for (int i = 1; i <= (int) barrio.size(); i++) {
		for (int j = 1; j <= (int) barrio.size(); j++) {
			for (int k = 0; k < 4; k++) {
				vector<Esquina> emptyPath;
				DFSReturn t = dfs(j, i, true, k, emptyPath);
				if (t.maxLength > maxPath) {
					maxPath = t.maxLength;
					pista = t.pista;
					pista.ini = t.path[0];
					pista.fin = t.path[t.path.size() - 1];
				}
			}
		}
	}

	return maxPath - 1;
}
