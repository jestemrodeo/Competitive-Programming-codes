#include <bits/stdc++.h>
using namespace std;
int main(){

int C,A,MB[1000],MBM=0;
cin>>C>>A;

    for(int i=C;i>0;i--){
        cin>>MB[i];
        if(MB[i]>MBM){
            MBM++;
            A= A-MB[i];
            cout<<A;
        }
        if(A==0){
        break;
        }
    }
    cout<<"3"<<endl;
}
