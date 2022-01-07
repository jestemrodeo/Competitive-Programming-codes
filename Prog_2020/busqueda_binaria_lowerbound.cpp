/*
    6 2 
    10 2 5 9 4 12
    9
    11  
*/

// lambda [](pair<int,int> lhs, int rhs) -> bool { return lhs.first < rhs; }

/* comp 

bool comp (const pair<int,int> &x , int t){ 
    return x.first < t;
}

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin>>n>>k;

    vector<int> v(n); //vector original
    vector<pair<int, int>> vBusqueda(n); //vector con la posicion

    for(int i=0; i<n; i++){
        cin>>v[i];
        vBusqueda[i] = {v[i],i};
    }

    sort(vBusqueda.begin(), vBusqueda.end());

    for(int i=0; i<k; i++){
        int buscado; cin>> buscado;

        auto it = lower_bound(vBusqueda.begin(), vBusqueda.end(), buscado,
        [](pair<int,int> p, int t) -> bool { return p.first < t;});
        
        if((*it).first == buscado){
            cout<< "Encontrado en la posicion: "<<((*it).second)+1<<endl;
        }
        else{
            cout<< "No encontrado, se encontro: " << (*it).first;
            cout<<" En la posicion: "<< ((*it).second)+1 <<endl;
        }
    }
}