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

/*

3
4 3 1
5 1 1
1 3 2

*/

vector<vector<int> > map;

void showPath(vector<Esquina> path) {
	//for (int i = 0; i < (int) path.size(); i++) cout << "(" << path[i].x << ", " << path[i].y << ") ";
	for (int i = 0; i < (int) path.size(); i++) cout << map[path[i].x][path[i].y] << " ";
	cout << endl;
}

pair<int, Pista> dfs(int x, int y, bool canTurn, int direction, vector<Esquina> path) {
	int dirx[4] = {0, 0, -1, 1};
	int diry[4] = {-1, 1, 0, 0};
	
	Esquina e;
	e.x = x;
	e.y = y;
	
	path.push_back(e);

	pair<int, Pista> r;
	
	if (canTurn) {
		for (int i = 0 + (direction < 2 ? 2 : 0); i < 2 + (direction < 2 ? 2 : 0); i++) {
			if (map[x + dirx[i]][y + diry[i]] < map[x][y]) {
				pair<int, Pista> t = dfs(x + dirx[i], y + diry[i], false, i, path);
				if (t.first > r.first) {
					r = t;
					r.second.cur.y = y;
					r.second.cur.x = x;
				}
			}
		}
	}
	
	if (map[x + dirx[direction]][y + diry[direction]] < map[x][y]) {
		pair<int, Pista> t = dfs(x + dirx[direction], y + diry[direction], canTurn, direction, path);
		if (t.first > r.first) r = t;
	}
	
	r.first++;
	//showPath(path);
	
	return r;
}

int curva(vector<vector<int> > barrio, int &K, Pista &pista) {
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
				pair<int, Pista> t = dfs(j, i, true, k, emptyPath);
				if (t.first > maxPath) {
					maxPath = t.first;
					pista = t.second;
				}
			}
		}
	}

	return maxPath - 1;
}
