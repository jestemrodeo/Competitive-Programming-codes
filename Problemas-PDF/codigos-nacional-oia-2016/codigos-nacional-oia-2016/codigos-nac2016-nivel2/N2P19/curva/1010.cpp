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

vector<vector<int> > map;

int dfs(int x, int y, bool canTurn, int direction) {
	int dirx[4] = {0, 0, -1, 1};
	int diry[4] = {-1, 1, 0, 0};

	int maxWay = 0;
	
	if (canTurn) {
		for (int i = 0 + (direction < 2 ? 2 : 0); i < 2 + (direction < 2 ? 2 : 0); i++) {
			if (map[y + diry[i]][x + dirx[i]] < map[x][y]) {
				int t = dfs(x + dirx[i], y + diry[i], false, i);
				if (t > maxWay) maxWay = t;
			}
		}
	}
	
	if (map[y + diry[direction]][x + dirx[direction]] < map[x][y]) {
		int t = dfs(x + dirx[direction], y + diry[direction], true, direction);
		if (t > maxWay) maxWay = t;
	}
	
	return maxWay + 1;
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
				int t = dfs(j, i, true, k);
				if (t > maxPath) maxPath = t;
			}
		}
	}

	return maxPath;
}
