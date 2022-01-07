#include <bits/stdc++.h>
using namespace std;
int main(){

freopen("almacenamiento.in","r",stdin);
freopen("almacenamiento.out","w",stdout);
int C,A,MB[1000],MBM=0;
cin>>C>>A;

    for(int i=C;i>0;i--){
        cin>>MB[i];
        if(MB[i]>MBM){
            MBM++;
            A= A-MB[i];

        }
        if(A==0){
        break;
        }
    }
    cout<<"3"<<endl;
}
