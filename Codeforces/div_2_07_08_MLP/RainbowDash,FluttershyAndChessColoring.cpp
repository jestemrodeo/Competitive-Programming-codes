#include <bits/stdc++.h>

using namespace std;

struct Pos{
    int x,y;
};
int pintar(int n){
    vector<int> tab (n);
    Pos inicio;
    inicio.x = n/2;
    inicio.y = n/2;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        cout<<pintar(n)<<"\n";
    }
}
