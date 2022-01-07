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
    int l=0,z=0;

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

                aux.push_back(t[x-1][n-1]);
                aux.push_back(t[x-1][n]);
                aux.push_back(t[x-1][n+1]);

                aux2.push_back(t[x][n-1]);
                aux2.push_back(t[x][n]);
                aux2.push_back(t[x][n+1]);

                aux3.push_back(t[x+1][n-1]);
                aux3.push_back(t[x+1][n]);
                aux3.push_back(t[x+1][n+1]);


                    if(abs((aux.at(0)+aux2.at(0)+aux3.at(0))/3) == aux3.at(0)){
                        fil.push_back(x+1);
                        col.push_back(n-1);
                    }

                    if(abs((aux.at(1)+aux2.at(1)+aux3.at(1))/3) == aux3.at(1)){
                        fil.push_back(x+1);
                        col.push_back(n);
                    }

                    if(abs((aux.at(2)+aux2.at(2)+aux3.at(2))/3) == aux3.at(2)){
                        fil.push_back(x+1);
                        col.push_back(n+1);
                    }



    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if((t[i][j]==f)){
                if(((i-1)>=0) && ((i+1)<=(M-1)) && ((j-1)>=0) && ((j+1)<=(N-1))){
                    if(i>0){
                        if(j>z) z=i; l=j;
                    }else{
                        z=i; l=j;
                    }
                }
            }
        }
    }
                aux.clear(); aux2.clear(); aux3.clear();


                aux.push_back(t[z-1][l-1]);
                aux.push_back(t[z-1][l]);
                aux.push_back(t[z-1][l+1]);

                aux2.push_back(t[z][l-1]);
                aux2.push_back(t[z][l]);
                aux2.push_back(t[z][l+1]);

                aux3.push_back(t[z+1][l-1]);
                aux3.push_back(t[z+1][l]);
                aux3.push_back(t[z+1][l+1]);


                    if(abs((aux.at(0)+aux2.at(0)+aux3.at(0))/3) == aux3.at(0)){
                        fil.push_back(z+1);
                        col.push_back(l-1);
                    }

                    if(abs((aux.at(1)+aux2.at(1)+aux3.at(1))/3) == aux3.at(1)){
                        fil.push_back(z+1);
                        col.push_back(l);
                    }

                    if(abs((aux.at(2)+aux2.at(2)+aux3.at(2))/3) == aux3.at(2)){
                        fil.push_back(z+1);
                        col.push_back(l+1);
                    }

}
