#include <bits/stdc++.h>
using namespace std;
int main(){


int C,A,MB[1000],MBM=0,N;
cin>>C>>A;
int V=A;
    for(int i=C;i>0;i--){
        cin>>MB[i];
        if(MB[i]>=MBM){
            MBM++;
            A= A-MB[i];
            if(A<=0){
                N= MBM;
                A=V;
            }

        }
        else{
            MBM=0;
            N=0;
            A=V;
        }
    }
    cout<<N<<endl;
}
