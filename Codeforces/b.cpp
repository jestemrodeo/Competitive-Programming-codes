#include<iostream>
#include <vector>

using namespace std;

int main(){
    int cant;
    short DEFAULT = -1;
    cin>>cant;
    for(int i = 0; i<cant; i++){
        int n;
        cin>>n;
        int pares = 0, impares = 0;
        for(int j = 0; j<n; j++){
            int t;
            cin>>t;
            if((t%2)!=(j%2)){
                if(t%2==0){
                    pares++;
                }
                else{
                    impares++;
                }
            }
        }
        if(pares==impares){
            cout<<pares<<endl;
        }
        else{
            cout<<DEFAULT<<endl;
        }
    }
}