#include <bits/stdc++.h>
using namespace std;
int main(){

int APP, ESP, Roman, TartaVegana[500];
cin>>APP>>ESP;
    for(;APP<=0;APP--);{
        int i=0;
        cin>>Roman;
        TartaVegana[i]=TartaVegana[i-1];
        if(Roman>TartaVegana[i]){
            TartaVegana[i]=Roman;
            ESP= Roman-ESP;
            i++;

        }
    cout<<TartaVegana[i]<<APP<<ESP<<Roman;
    }
}
