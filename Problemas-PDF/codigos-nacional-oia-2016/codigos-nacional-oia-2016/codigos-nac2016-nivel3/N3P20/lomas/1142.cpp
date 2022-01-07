#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();

    t.resize(N);
    for(int i=0; i<M; i++){
        t[i].resize(M);
    }

    long sum=0;
    long nn,mm=0;
    long f=0;

    nn = floor(N/2);
    mm = floor(M/2);

    f = nn+mm+k + 1;


    vector<int> aux;
    vector<int> aux2;
    vector<int> aux3;


    int n=0,x=0;

    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if((t[i][j]==f)){
                if(((i-1)>=0) && ((i+1)<=(M-1)) && ((j-1)>=0) && ((j+1)<=(N-1))){
                    if(i>0){
                        if(i>x) x=i; n=j;
                    }else{
                        x=i; n=j;
                    }
                }
            }
        }
    }

               for(int k=0; k<9; k++){
                    aux.push_back(t[x-1][n-1]);
                    aux.push_back(t[x-1][n]);
                    aux.push_back(t[x-1][n+1]);

                    aux2.push_back(t[x][n-1]);
                    aux2.push_back(t[x][n]);
                    aux2.push_back(t[x][n+1]);

                    aux3.push_back(t[x+1][n-1]);
                    aux3.push_back(t[x+1][n]);
                    aux3.push_back(t[x+1][n+1]);

                    if(k>3){
                        if(aux.at(0)!=aux.at(2)) fil.push_back(x-1); col.push_back(n+1);
                    }
                }
}
