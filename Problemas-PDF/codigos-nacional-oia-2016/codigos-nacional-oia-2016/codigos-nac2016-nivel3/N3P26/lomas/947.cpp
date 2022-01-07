#include <vector>

using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
    int M = t.size();
    int N = t[0].size();
    vector <int> para1;
    para1.resize(8);
    int flag=0;

    for (int i=0;i<M;i++){

        for (int j=0;j<N;j++){

            if (i!=0)
            if (j!=0){
                para1[0]=t[i-1][j-1];
                if(para1[0]>=t[i-1][j-1])
                    flag=1;
            }
            if (j!=0){
                para1[1]=t[i][j-1];
                if(para1[0]>=t[i][j-1])
                    flag=1;
            }
            if (i<M-1)
            if (j!=0){
                para1[2]=t[i+1][j-1];
                if(para1[0]>=t[i+1][j-1])
                    flag=1;
            }
            if (i!=0){
                para1[3]=t[i-1][j];
                if(para1[0]>=t[i-1][j])
                    flag=1;
            }
            if (i<M-1){
                para1[4]=t[i+1][j];
                if(para1[0]>=t[i+1][j])
                    flag=1;
            }
            if (i!=0)
            if (j<N-1){
                para1[5]=t[i-1][j+1];
                if(para1[0]>=t[i-1][j+1])
                    flag=1;
            }
            if (j<N-1){
                para1[6]=t[i][j+1];
                if(para1[0]>=t[i][j+1])
                    flag=1;
            }
            if (i<M-1)
            if (j<N-1){
                para1[7]=t[i+1][j+1];
                if(para1[0]>=t[i+1][j+1])
                    flag=1;
            }

            if(flag==0){
                (fil).push_back(i);
                (col).push_back(j);
            }
        }
    }
}
