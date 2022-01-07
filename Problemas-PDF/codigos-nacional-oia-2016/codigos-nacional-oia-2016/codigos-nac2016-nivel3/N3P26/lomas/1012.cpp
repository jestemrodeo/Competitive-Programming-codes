#include <vector>
#include <iostream>

using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();
    //vector <int> para1;
    //para1.resize(8);
    int flag=0;

    for (int j=0;j<M;j++){

        for (int i=0;i<N;i++){

            if (j!=0)
            if (i!=0){
                //para1[0]=t[j-1][i-1];
                if(t[j-1][i-1]>=t[j][i])
                    flag=1;
            }
            if (i!=0){
                //para1[1]=t[j][i-1];
                if(t[j][i-1]>=t[j][i])
                    flag=1;
            }
            if (j<(M-1))
            if (i!=0){
                //para1[2]=t[j+1][i-1];
                if(t[j+1][i-1]>=t[j][i])
                    flag=1;
            }
            if (j!=0){
                //para1[3]=t[j-1][i];
                if(t[j-1][i]>=t[j][i])
                    flag=1;
            }
            if (j<(M-1)){
                //para1[4]=t[j+1][i];
                if(t[j+1][i]>=t[j][i])
                    flag=1;
            }
            if (j!=0)
            if (i<(N-1)){
                //para1[5]=t[j-1][i+1];
                if(t[j-1][i+1]>=t[j][i])
                    flag=1;
            }
            if (i<(N-1)){
                //para1[6]=t[j][i+1];
                if(t[j][i+1]>=t[j][i])
                    flag=1;
            }
            if (j<(M-1))
            if (i<(N-1)){
                //para1[7]=t[j+1][i+1];
                if(t[j+1][i+1]>=t[j][i])
                    flag=1;


            }
            if(flag==0){
                cout << "loma\n";
                (fil).push_back(i);
                (col).push_back(j);
            }
        }
    }
}
