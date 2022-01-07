#include <vector>
#include <string>
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
	return R;	
}
int MayorM(vector<vector <int> > MV,int C)
{int Max=0,L=MV.size(),R=0;
	for(int i=0;i<L;i++)
	{if(MV[C][i]>Max){Max=MV[C][i];
					  R=i;
					}
	}
return R;
}

int curva(vector<vector<int> > barrio, int &K, Pista &pista)
{	
	int M=barrio.size();
	int cambios=true;
	for(int i=1;i<M;i++)for(int j=1;j<M;j++)
	{if(barrio[i][j]!=barrio[i-1][j]||barrio[i][j]!=barrio[i-1][j-1]||barrio[i][j]!=barrio[i][j-1])
		cambios=false;}
	if(cambios)return -1;
	
	
	vector<vector <int> > Longs(M,vector<int> (M,0));
	int l=0;bool s=true,m;
	for(int k=0;k<M;k++){
	
	for(int i=0;i<M;i++)
	{if(s){m=barrio[k][i]>barrio[k][i-1],l=0,s=false;}
		else
		{ if((barrio[k][i]>barrio[k][i-1])==m)
			{
				l++;
			}
		  else
		  {
		  s=true;
		  if(m){Longs[k][i]=l;}
		  else{Longs[k][i-l]=l;}
		  l=0;
		  }	
		}
		
	}
}
		for(int k=0;k<M;k++){
	s=true;
	for(int i=0;i<M;i++)
	{if(s){m=(barrio[i][k]>barrio[i-1][k]),l=0,s=false;}
		else
		{ if((barrio[i][k]>barrio[i-1][k])==m)
			{
				l++;
			}
		  else
		  {
		  s=true;
		  if(m){Longs[i][k]=max(Longs[i][k],l);}
		  else{Longs[i-l][k]=max(Longs[i-l][k],l);}
		  l=0;
		  }	
		}
		
	}
}
	vector<int> MX(M),MY(M);
	int Tmax=0;
	for(int k=0;k<M;k++)
	{int Smax=0, maxi=0;
	for(int i=0;i<M;i++)
		{if(Longs[k][i]>maxi)
			{
			 Smax=maxi;
			 maxi=Longs[k][i];
			
			}
		 else
			{
			if(Longs[k][i]>Smax)Smax=Longs[k][i];
			}
		}	
	MX[k]=Smax+maxi;
	Tmax=max(MX[k],Tmax);	
	}
		for(int k=0;k<M;k++)
	{int Smax=0, maxi=0;
	for(int i=0;i<M;i++)
		{if(Longs[i][k]>maxi)
			{
			 Smax=maxi;
			 maxi=Longs[i][k];
			
			}
		 else
			{
			if(Longs[i][k]>Smax)Smax=Longs[i][k];
			}
		}	
	MY[k]=Smax+maxi;
	Tmax=max(MX[k],Tmax);	
	}
	K=0;
	for(int i=0;i<M;i++)K+=(MX[i]==Tmax)+(MY[i]==Tmax);
	//vector <int> MF(M,0),MC(M,0);
	//for(int i=0;i<
  //  int M = barrio.size();
    pista.ini.x = 0;
    pista.ini.y = 0;
    pista.cur.x = 0;
    pista.cur.y = 0;
    pista.fin.x = 0;
    pista.fin.y = 0;
    //K = 1000000000;
    return 0;
}
