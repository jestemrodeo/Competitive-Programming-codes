#include <bits/stdc++.h>

using namespace std;

#define MAX 5000
int p,f;
bool puestos[MAX];
queue< pair< pair<int,int>,int > > Q;
vector<int> res;

int puestospasados(const int a,const int b){
    int total=0;
    for(int i=a;i<(a+b)+1;i++){
        if(puestos[i]==true)
            total+=1;
    }
    return total;
}

void bfs(const vector<int> costos){
    pair< pair<int,int>,int > act;

    Q.push(make_pair(make_pair(0,0),0));

    while(!Q.empty()){
        act = Q.front();
        Q.pop();

        if(act.second == f){
            res.push_back(act.first.second);
        }

        if(act.first.first==p) continue;

        for(int i=0;i<costos.size();i++){
            if( puestos[act.first.first] != true && i==0 && act.first.first+1 <= p){
                Q.push( make_pair( make_pair(act.first.first+1,act.first.second),act.second ) );
            } else if( i!=0 && act.first.first+i <= p){
                Q.push( make_pair( make_pair( act.first.first+i,act.first.second+costos[i-1] ), act.second+puestospasados(act.first.first,i) ) );
            }
        }

    }
}

void init(const int P){
    for(int i=0;i<P+1;i++){
        puestos[i]=false;
    }
}

int pos(const int act,const int P){
    for(int i=act+1;i<P+1;i++){
        if(puestos[i])
            return i;
    }
}

int mini(){
    for(int i=0;i<res.size();i++){
        if(res[i]!=0)
            return res[i];
    }
}

int toldos(vector<int> feriantes, vector<int> costos)
{
    int F= feriantes.size();
    int P = costos.size();
    int total=-1;
    int act;

    cout << costos[0] << ' ' << costos[1] << endl;

    p=P;
    f=F;

    init(P);

    act=pos(0,P);

    for(int i=0;i<F;i++){
        puestos[feriantes[i]]=true;
    }


    bfs(costos);

    if(res.size()>0){
        sort(res.begin(),res.end());

        return mini();
    }
}
