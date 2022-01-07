#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin ("zoo_roto.in");
    //ofstream cout ("zoo.out");
    int esp,m,h;
    int codigos[10000];
    cin>> esp >> m >>h;
    for(int i = 0; i<esp; i++){
        int t1,t2; cin>>t1>>t2;
        codigos[t1]=t2;
    }
    vector<int> machos(m);
    for(int i = 0; i<m; i++){
        cin>>machos[i];
    }
    vector<int> hembras(h);
    for(int i = 0; i<h; i++){
        cin>>hembras[i];
    }
    int cant;
    if(m<h){
        cant=m;
    }
    else{
        cant=h;
    }
    int destruido=0;
    int parejas=0;
    int mayorSecuencia=0;
    int sec=0;
    for(int i=0; i<cant; i++){
        bool flag=true;
        if(abs(codigos[machos[i]]-codigos[hembras[i]])>=4){
            destruido++;
            if(mayorSecuencia<sec){
                mayorSecuencia=sec;
            }
            flag = false;
            sec=0;
        }
        else if(machos[i]==hembras[i]){
            parejas++; 
        }
        if (flag){
            sec++;
        }
    }
    if(mayorSecuencia<sec){
        mayorSecuencia=sec;
    }
    cout<<parejas<<" "<<destruido<<" "<<mayorSecuencia<<endl;
    cin.close();
    //cout.close();
}