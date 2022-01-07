//#include <iostream>
#include <vector>

using namespace std;

struct Esquina
{
    int x = -1;
    int y = -1;
};

struct Pista
{
    Esquina ini, cur, fin;
};

struct Man
{
	Esquina anterior, actual, ini, cur;
};

int movX[4] = {1, 0, -1, 0};
int movY[4] = {0, -1, 0, 1};
bool isDoingALine, passed;
int M;
vector<vector<int> > outBarrio;
int large, firstLarge, secondLarge, thirdLarge, fourthLarge;
int maxLarge = 0;
int amountToMaxLarge;
Man maxMan;

int getLarge(Man newMan) {
	if (newMan.cur.x == -1) {
		firstLarge = newMan.ini.x - newMan.actual.x;
		if (firstLarge < 0) firstLarge *= -1;
		
		secondLarge = newMan.ini.y - newMan.actual.y;
		if (secondLarge < 0) secondLarge *= -1;
		
		large = firstLarge + secondLarge;
	} else {
		firstLarge = newMan.ini.x - newMan.cur.x;
		if (firstLarge < 0) firstLarge *= -1;
		
		secondLarge = newMan.ini.y - newMan.cur.y;
		if (secondLarge < 0) secondLarge *= -1;
		
		thirdLarge = newMan.cur.x - newMan.actual.x;
		if (thirdLarge < 0) thirdLarge *= -1;
		
		fourthLarge = newMan.cur.y - newMan.actual.y;
		if (fourthLarge < 0) fourthLarge *= -1;
		
		large = firstLarge + secondLarge + thirdLarge + fourthLarge;
	}
	
	return large;
}

void dfs (Man man) {
	Esquina actual;
	passed = false;
	for (int i = 0; i < 4; i++) {
		actual.x = man.actual.x + movX[i];
		actual.y = man.actual.y + movY[i];
		isDoingALine = false;
		
		if ((actual.x == man.actual.x * 2 - man.anterior.x && actual.y == man.actual.y * 2 - man.anterior.y) || man.anterior.x == -1) {
			isDoingALine = true;
		}
		
		if (man.cur.x == -1 || isDoingALine) { // no hizo nunca una curva, o esta haciendo una linea
			if (actual.x >= 0 && actual.y >= 0 && actual.x < M && actual.y < M) { // esta dentro de las dimensiones
				if (outBarrio[actual.x][actual.y] < outBarrio[man.actual.x][man.actual.y]) { // esta descendiendo
					passed = true;
					Man newMan = man;
					newMan.actual = actual;
					newMan.anterior = man.actual;
					if (!isDoingALine) {
						newMan.cur = man.actual;
					}
					
					dfs(newMan);
				}
			}
		}
		if (!passed) {
			if (getLarge(man) == 8) {
				/*
				cout << man.cur.x << ",";
				cout << man.cur.y << ",";
				cout << man.anterior.x << ",";
				cout << man.anterior.y << ",";
				cout << man.actual.x << ",";
				cout << man.actual.y << ",";
				cout << man.ini.x << ",";
				cout << man.ini.y << " ";
				* */
			}
			if (getLarge(man) > maxLarge) {
				maxLarge = getLarge(man);
				maxMan = man;
				amountToMaxLarge = 1;
			} else if (getLarge(man) == maxLarge) {
				amountToMaxLarge++;
			}
			passed = true;
		}
	}
}

int curva(vector<vector<int> > barrio, int &K, Pista &pista)
{
    M = barrio.size();
    pista.ini.x = 0;
    pista.ini.y = 0;
    pista.cur.x = 0;
    pista.cur.y = 0;
    pista.fin.x = 0;
    pista.fin.y = 0;
    K = 1000000000;
    
    outBarrio.resize(M);
    
    for (int i = 0; i < M; i++) {
		outBarrio[i].resize(M);
    }
    
    outBarrio = barrio;
    
    Esquina initial;
    Man initialMan;
    for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			initial.x = i;
			initial.y = j;
			initialMan.actual = initial;
			initialMan.ini = initial;
			
			dfs(initialMan);
		}
	}
    
    pista.ini.x = maxMan.ini.x + 1;
    pista.ini.y = maxMan.ini.y + 1;
    pista.cur.x = maxMan.cur.x + 1;
    pista.cur.y = maxMan.cur.y + 1;
    pista.fin.x = maxMan.actual.x + 1;
    pista.fin.y = maxMan.actual.y + 1;
    
    K = amountToMaxLarge;
    
    return maxLarge;
}
/*
int main()
{
    int M; cin >> M;
    vector<vector<int> > barrio(M, vector<int>(M));
    for (int y=0; y<M; y++)
    for (int x=0; x<M; x++)
        cin >> barrio[x][y];
    int K; Pista pista;
    int sol = curva(barrio, K, pista);
    if (sol == -1)
        cout << "Sin pista" << endl;
    else
    {
        cout << "El largo de la pista es " << sol << "." << endl;
        cout << "Hay " << K << " inicios de pistas." << endl;
        cout << "Inicio: (" << pista.ini.x << "," << pista.ini.y << ") " <<
                "Curva: ("  << pista.cur.x << "," << pista.cur.y << ") " <<
                "Fin: ("    << pista.fin.x << "," << pista.fin.y << ")"  << endl;
    }
    return 0;
}
* */
