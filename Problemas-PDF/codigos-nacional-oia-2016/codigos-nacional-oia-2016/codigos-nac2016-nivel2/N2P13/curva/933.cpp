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
int Mayor(vector <int> V)
{int Max=0,L=V.size(),R=0;
	for(int i=0;i<L;i++)
	if(V[i]>Max){Max=V[i];R=i;}	
}
int MayorM(vector<vector <int> > MV,int C)
{int Max=0,L=MV.size(),R=0;
	for(int i=0;i<L;i++)
	{if(MV[C][i]>Max){Max=MV[C][i];
					  R=i;
					}
	}
}

int curva(vector<vector<int> > barrio, int &K, Pista &pista)
{	int M=barrio.size();
	int cambios=true;
	for(int i=1;i<M;i++)for(int j=1;j<M;j++)
	{if(barrio[i][j]!=barrio[i-1][j]||barrio[i][j]!=barrio[i-1][j-1]||barrio[i][j]!=barrio[i][j-1])
		cambios=false;}
	if(cambios)return -1;
	/*
	int LM;
	vector<vector <int> > Longs(M,vector<int> (M,0));
	for(int i=0;i<M;i++)
	{LM=Mayor(barrio[i]);
	 Longs[i][LM]=max(M-LM-1,LM);		
	}
	for(int i=0;i<M;i++)
	{LM=Mayor(barrio,i);
	 Longs[LM][i]=max(M-LM-1,LM);				
	}
	for(int i=0;i<M;i++)
	{
		
		
	}*/
	//vector <int> MF(M,0),MC(M,0);
	//for(int i=0;i<
  //  int M = barrio.size();
    pista.ini.x = 0;
    pista.ini.y = 0;
    pista.cur.x = 0;
    pista.cur.y = 0;
    pista.fin.x = 0;
    pista.fin.y = 0;
    K = 1000000000;
    return 42;
}
