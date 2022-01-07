#include<iostream>
#include<vector>

using namespace std;

int main(){
    freopen("maraton.in","r",stdin);
    int n; cin>>n;
    vector<int> categorias(11,0);

    for(int i=0; i<n; i++){
        int nP, cat;
        cin>>nP>>cat;
        if(categorias[cat]==0){
            categorias[cat]=nP;
        }
    }
    for(int i=1; i<11; i++){
        cout<<i<<" "<<categorias[i]<<endl;
    }
    fclose(stdin);
}