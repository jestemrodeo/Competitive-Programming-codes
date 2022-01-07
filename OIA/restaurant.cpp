#include<iostream>
#include <vector>

using namespace std;

int main(){
    int cant;
    cin>>cant;
    for(int i = 0; i<cant; i++){
        int n,k;
        cin>>n>>k;
        vector<int> tables(n);
        for(int j = 0; j<n; j++){
            cin>>tables[j];
        }
        int distance = k;
        int additionalTables = 0;
        for(int j = 0; j<n; j++){
            if(tables[j]==1){
                distance=0;
            }
            if(tables[j]==0){
                distance--;
            }
            if(distance==k){
                bool flag=true;
                for(int m = j; m<k; m++){
                    if(tables[m]==1){
                        flag=false;
                    }
                }
                if(flag){
                    additionalTables++;
                }
                distance=0;
            }
        }
        cout<<additionalTables<<endl;
    }
}