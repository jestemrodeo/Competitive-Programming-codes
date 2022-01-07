#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

#define Maximo 1000
#define Minimo 1
#define Maxk 9
#define altura 10000


void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();
    int aux=k;
    aux= 10 - aux;
    for(unsigned int i=0; i < N; i++){
        for(unsigned int j=0; j < M;j++){
            if(t[i][j]==aux){
                if(t[i+1][j] < altura && t[i-1][j] < altura && t[i][j+1] < altura && t[i][j-1] < altura)

                fil.push_back(i);
                col.push_back(j);
            }
        }
    }
}
