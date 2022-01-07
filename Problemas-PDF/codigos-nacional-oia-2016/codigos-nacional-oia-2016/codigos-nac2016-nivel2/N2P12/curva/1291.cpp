#include <vector>

using namespace std;

struct Esquina
{
    int x,y;
};

struct Pista
{
    Esquina ini, cur, fin;
};

int curva(vector<vector<int> > barrio, int &K, Pista &pista)
{
    int M = barrio.size();
    pista.ini.x = 0;
    pista.ini.y = 0;
    pista.cur.x = 0;
    pista.cur.y = 0;
    pista.fin.x = 0;
    pista.fin.y = 0;
    K = 1000000000;
    vector <vector<vector <int> > > bruto(0);
    int i, j, k, l;
    int dist = 0;
    for (i=0; i<M; i++)
		for (j=0; j<M; j++) {
			if (i<M)
				for (k=1;i+k<M;k++) {
				if (j<M)
					if (barrio[i+k-1][j]>barrio[i+k][j]) 
						if (barrio[i+k][j]>barrio[i+k][j+1])
							for (l=1;l+j<M;l++)
								if (barrio[i+k][j+l-1]<=barrio[i+k][j+l])
									if (dist<k+l)
										dist=k+l;
						if (j>0)
						if (barrio[i+k][j]>barrio[i+k][j-1])
							for (l=1;l-j>0;l++)
								if (barrio[i+k][j-l+1]<=barrio[i+k][j-l])
									if (dist<k+l)
										dist=k+l;
									}
			if (i>0)
				for (k=1;i-k>M;k++) {
					if (j<M)
					if (barrio[i-k+1][j]>barrio[i-k][j]) 
						if (barrio[i-k][j]>barrio[i-k][j+1])
							for (l=1;l+j<M;l++)
								if (barrio[i-k][j+l-1]<=barrio[i-k][j+l])
									if (dist<k+l)
										dist=k+l;
						if (j>0)
						if (barrio[i-k][j]>barrio[i-k][j-1])
							for (l=1;l-j>0;l++)
								if (barrio[i-k][j-l+1]<=barrio[i-k][j-l])
									if (dist<k+l)
										dist=k+l;
									}
			if (j<M)
				for (l=1;j-l>M;l++) {
					if (i<M)
					if (barrio[i][j-l+1]>barrio[i][j-l+1]) 
						if (barrio[i][j-l+1]>barrio[i][j-1])
							for (l=1;l+j<M;l++)
								if (barrio[i-k][j+l-1]<=barrio[i-k][j+l])
									if (dist<k+l)
										dist=k+l;
						if (j>0)
						if (barrio[i-k][j]>barrio[i-k][j-1])
							for (l=1;l-j>0;l++)
								if (barrio[i-k][j-l+1]<=barrio[i-k][j-l])
									if (dist<k+l)
										dist=k+l;
									}
			if (j>0)
				for (k=1;i-k>M;k++) {
					if (j<M)
					if (barrio[i-k+1][j]>barrio[i-k][j]) 
						if (barrio[i-k][j]>barrio[i-k][j+1])
							for (l=1;l+j<M;l++)
								if (barrio[i-k][j+l-1]<=barrio[i-k][j+l])
									if (dist<k+l)
										dist=k+l;
						if (j>0)
						if (barrio[i-k][j]>barrio[i-k][j-1])
							for (l=1;l-j>0;l++)
								if (barrio[i-k][j-l+1]<=barrio[i-k][j-l])
									if (dist<k+l)
										dist=k+l;
									}
								}
	if (dist==0)		
		return -1;
	else
		return dist;
}
