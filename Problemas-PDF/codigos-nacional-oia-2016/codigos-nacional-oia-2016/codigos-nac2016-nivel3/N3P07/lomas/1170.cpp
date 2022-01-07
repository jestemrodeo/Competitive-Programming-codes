#include <vector>

using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();
    int maxn=0, i, j, i1, j1, maxt=0;


    int area=2*k+1;

    int limite=(area+1)/2 -1;

    for(i=limite; i<=M-limite; i++)
    {
        for(j=limite; j<=N-limite; j++){
            if(t[i][j]>maxn){
            maxn=t[i][j];
            }
        }
    }

    for(i1=limite; i1<=M-limite; i1++)
    {
        for(j1=limite; j1<=N-limite; j1++){
            if(t[i1][j1]==maxn){

                    if(t[i1-1][j1-1] < maxn && t[i1-1][j1] < maxn && t[i1-1][j1+1] < maxn && t[i1+1][j1-1] < maxn && t[i1+1][j1] < maxn && t[i1+1][j1+1] < maxn && t[i1][j1+1] < maxn && t[i1][j1-1] < maxn){
                        fil.push_back(i1+1);
                        col.push_back(j1+1);


                    }

            }
        }
    }
if(fil.empty()==1){
   for(i=limite; i<=M-limite; i++)
    {
        for(j=limite; j<=N-limite; j++){
            if(t[i][j]>maxt && t[i][j]!=maxn){
            maxt=t[i][j];
            }
        }
    }

    for(i=limite; i<=M-limite; i++)
    {
        for(j=limite; j<=N-limite; j++){
            if(t[i][j]==maxt){

                    if(t[i-1][j-1] < maxt && t[i-1][j] < maxt && t[i-1][j+1] < maxt && t[i+1][j-1] < maxt && t[i+1][j] < maxt && t[i+1][j+1] < maxt && t[i][j+1] < maxt && t[i][j-1] < maxt){
                        fil.push_back(i+1);
                        col.push_back(j+1);
                    }

            }
        }
    }

                        }

    if(fil.empty()==1){
    maxn=0;
   for(i=limite; i<=M-limite; i++)
    {
        for(j=limite; j<=N-limite; j++){
            if(t[i][j]>maxn && t[i][j]<maxt){
            maxn=t[i][j];
            }
        }
    }

    for(i=limite; i<=M-limite; i++)
    {
        for(j=limite; j<=N-limite; j++){
            if(t[i][j]==maxn){

                    if(t[i-1][j-1] < maxn && t[i-1][j] < maxn && t[i-1][j+1] < maxn && t[i+1][j-1] < maxn && t[i+1][j] < maxn && t[i+1][j+1] < maxn && t[i][j+1] < maxn && t[i][j-1] < maxn){
                        fil.push_back(i+1);
                        col.push_back(j+1);
                    }

            }
        }
    }

                        }
}


