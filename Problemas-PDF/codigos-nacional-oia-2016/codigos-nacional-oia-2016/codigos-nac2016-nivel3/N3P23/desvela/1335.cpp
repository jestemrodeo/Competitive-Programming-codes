#include <bits/stdc++.h>

using namespace std;


#define forsn(i,s,n) for(int i = (int)(s);i < (int)(n);i++)
#define forn(i,n) for(int i = 0;i < (int)(n);i++)
#define mp make_pair
#define pb push_back
#define si(a) ((int)(a).size())
typedef pair<int,int> pii;


string desvela(string captado, string conocido)
{
    string c;
    forn(i,si(conocido))if(conocido[i]!=' ')c+=conocido[i];

    vector<int>con;
    for(int i=2;i<si(c);i++)con.pb(c[i]-c[i-2]);

    vector<int>capt;
    for(int i=2;i<si(captado);i++)capt.pb(captado[i]-captado[i-2]);

    int pos;
    forn(i,si(capt)-(si(con)-1)){
        bool is = true;
        forn(j,si(con)){
            if(con[j]!=capt[i+j] && con[j]!=26-capt[i+j]){
                is=false;
                break;
            }
        }
        if(is){
            pos=i;
            break;
        }
    }
    cerr << pos << endl;
    string res = captado;
    int v1 = c[0]-captado[pos];
    int v2 = c[1]-captado[pos+1];
    forn(i,si(res)){
        if(i%2==pos%2)res[i]=(res[i]+v1);
        else res[i]=(res[i]+v2);
        if(res[i]<'A')res[i]=res[i]+1-'A'+'Z';
        if(res[i]>'Z')res[i]=res[i]-1-'Z'+'A';
    }

    return res;
}
