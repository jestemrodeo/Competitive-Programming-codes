#include <vector>
#include <queue>
#include <string.h>
#include <cstdio>
#define pii pair<int,int>
#define piiii pair<pii,pii>
using namespace std;

bool BFS(int coordx,int coordy,int kk,vector<vector<int> > *t);

int x[]={0,0,1,-1,-1,1,1,-1};
int y[]={1,-1,0,0,1,-1,1,-1};
int vist[1000][1000];

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();
    
    /*fil.resize(3);
    fil[0] = 0;
    fil[1] = 1;
    fil[2] = 2;
    
    col.resize(3);
    col[0] = 0;
    col[1] = 2;
    col[2] = 1;*/
   
	for(int i=0;i<t.size();i++)
	{
		for(int e=0;e<t[i].size();e++)
		{
			if(BFS(i,e,k,&t))
			{
				fil.push_back(i+1);
				col.push_back(e+1);
			}
		}
	}
}

bool BFS(int coordx,int coordy,int kk,vector<vector<int> > *t)
{
	bool mal=false;
	memset(vist,0,sizeof(vist));
	queue<piiii>q;
	q.push(make_pair(make_pair(coordx,coordy),make_pair((*t)[coordx][coordy],0)));
	//printf("Parados en: %d %d\n",q.front().first.first+1,q.front().first.second+1);
	while(!q.empty())
	{
		piiii temp=q.front();
		q.pop();
		//printf("K: %d\n",temp.second.second);
	//	printf("PARADA SECUNDARIA: %d %d\n",temp.first.first+1,temp.first.second+1);
		for(int o=0;o<6;o++)
		{
			
			int nt=temp.first.first+x[o];
			int sr=temp.first.second+y[o];
			//printf("ANALIZANDO: %d %d\n",nt+1,sr+1);
			if(nt==temp.first.first&&sr==temp.second.second)
				continue;
			//printf("INFO: X:%d Y:%d\n",(*t)[0].size(),t->size());
			if(nt>-1&&nt<t->size()&&sr>-1&&sr<(*t)[0].size())
			{
			//	printf("INFO: X:%d Y:%d\n",nt+1,sr+1);
				if(vist[nt][sr])
				{
					//printf("VISITADO\n");
					if(coordx==temp.first.first||coordy==temp.first.second)
					{
						if((*t)[nt][sr]>temp.second.first)
						{
							//printf("CON ESTE ME VOY: %d %d\n",nt+1,sr+1);
							mal=true;
							break;
						}
						else
							break;
					}
					else
					{
						if((*t)[nt][sr]<temp.second.first)
						{
							//printf("CON ESTE ME VOY: %d %d\n",nt+1,sr+1);
							mal=true;
							break;
						}
					}
				}
				else
				{
				//	printf("K: %d ACUTADL: %d\n",kk,temp.second.second);
				//	printf("NO VISITADO\n");
					if(temp.second.second<kk)
					{
						if((*t)[nt][sr]>temp.second.first)
						{
					//		printf("CON ESTE ME VOY: %d %d\n",nt+1,sr+1);
							mal=true;
							break;
						}
						else
						{
					//		printf("PUSHEAMOS: %d %d\n",nt+1,sr+1);
							q.push(make_pair(make_pair(nt,sr),make_pair(temp.second.first,temp.second.second+1)));
						}
					vist[nt][sr]=1;
					}
					
				}
				vist[nt][sr]=1;
				//printf("INFINITO!");
			}
			else
			{
				
			//	printf("FALSE PORQUE SE SALE\n");
				mal=true;
				break;
				
			}
		}
		//printf("-----------\n");
		if(mal==true)
			break;
		if(temp.second.second==kk)
			break;
	}
	if(mal)
	{
		//printf("DEVOLVEMOS FALSE\n");
		return false;
	}
	else
	{
		//printf("DEVOLVEMOS TRUE\n");
		return true;
	}
}

