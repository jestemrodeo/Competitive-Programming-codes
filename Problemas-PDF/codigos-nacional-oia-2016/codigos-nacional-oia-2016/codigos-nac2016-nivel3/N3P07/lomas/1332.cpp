#include <vector>

using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();
    long int maxn=0, i, j, i1, j1, maxt=0;

if(k!=0 && k<=M && k<=N){

    int area=2*k+1;

    int limite=(area+1)/2 -1;

    for(i=k; i<=(M-k); i++)
    {
        for(j=k; j<=(N-k); j++){
            if(t[i][j]>maxn){
            maxn=t[i][j];
            }
        }
    }

    for(i1=k; i1<=(M-k); i1++)
    {
        for(j1=k; j1<=(N-k); j1++){
            if(t[i1][j1]==maxn){

                    if(t[i1-1][j1-1] < maxn && t[i1-1][j1] < maxn && t[i1-1][j1+1] < maxn && t[i1+1][j1-1] < maxn && t[i1+1][j1] < maxn && t[i1+1][j1+1] < maxn && t[i1][j1+1] < maxn && t[i1][j1-1] < maxn){
                        fil.push_back(i1);
                        col.push_back(j1);


                    }

            }
        }
    }
if(fil.empty()==1){
   for(i=k; i<=M-k; i++)
    {
        for(j=k; j<=N-k; j++){
            if(t[i][j]>maxt && t[i][j]!=maxn){
            maxt=t[i][j];
            }
        }
    }

    for(i=k; i<=M-k; i++)
    {
        for(j=k; j<=N-k; j++){
            if(t[i][j]==maxt){

                    if(t[i-1][j-1] < maxt && t[i-1][j] < maxt && t[i-1][j+1] < maxt && t[i+1][j-1] < maxt && t[i+1][j] < maxt && t[i+1][j+1] < maxt && t[i][j+1] < maxt && t[i][j-1] < maxt){
                        fil.push_back(i);
                        col.push_back(j);
                    }

            }
        }
    }

                        }}

}


