#include <vector>

using namespace std;

int esloma (int a, int b, int s, vector<vector<int> > t){

    int flag = 0;

    for ( int i=a-s ; i<=a+s ; i++ ){
        if (i==a-s){
            if (t[i][b-s]>=t[i+1][(b-s)+1]){
                flag =1;
                break;
            }
        }

        if (i==(a+s)){

            if (t[i][b-s]>=t[i-1][(b-s)+1]){
                flag =1;
                break;
            }
        }

        //if (i==(a-s)+1){
//
  //          if ()
    //    }
    }
    return 1;

}

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{

    int r=0; ///cantidad encontrada

    int M = t.size(); ///filas
    int N = t[0].size(); ///columnas
    int l = 2*k+1; ///lado de la loma
    int s=1; ///grado de separacion

    int v;
    vector <int> para1;
    para1.resize(9);

    int j;
    int b; ///columna
    /*fil.resize(3);
    fil[0] = 0;
    fil[1] = 1;
    fil[2] = 2;

    col.resize(3);
    col[0] = 0;
    col[1] = 2;
    col[2] = 1;*/

    /*for (int i=k ; i<=N-k;i++){
        for (int j=k ; j<=M-k ; j++){


        }

    }*/

    while (s<=k){

        for ( int i=k ; i<=N-k ; i++ ){

            for ( int j=k ; j<=M-k ; j++ ){

                if (k==1){
                    v=t[i][j];
                    para1[0]=t[i-1][j-1];
                    para1[1]=t[i][j-1];
                    para1[2]=t[i+1][j-1];
                    para1[3]=t[i-1][j];
                    para1[4]=t[i+1][j];
                    para1[5]=t[i-1][j+1];
                    para1[6]=t[i][j+1];
                    para1[7]=t[i+1][j+1];

                    if ( v < para1[0] || v < para1[1] || v < para1[2] || v < para1[3] || v < para1[4] || v < para1[5] || v < para1[6] || v < para1[7] )
                        continue;
                    else{
                        r++;
                        fil.resize(r);
                        col.resize(r);
                        fil[r-1]=i;
                        col[r-1]=j;

                    }
                }
                ///else
                  ///  esloma(i,j,s,t);
            }
        }
        s++;
    }

}

/*
if (s==0){
        esloma ( t , i , j , i-1 , j-1 , 1);
    }

if (s>0){
    if (a==i-1 && b==j-1){
        esloma()
    }
}
*/

