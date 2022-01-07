#include <bits/stdc++.h>
using namespace std;
int main(){

freopen("almacenamiento.in","r",stdin);
freopen("almacenamiento.out","w",stdout);

int C,A,MB[1000],MBM=0,N;
cin>>C>>A;
int V=A;
    for(int i=C;i>0;i--){
        cout<<MBM<<endl<<N<<endl;
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
        }
    }
    cout<<N<<endl;
}
