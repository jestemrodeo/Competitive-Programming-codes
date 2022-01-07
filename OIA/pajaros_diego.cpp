#include <bits/stdc++.h>
using namespace std;
int n,a;
int memo[60001][301];
vector<int> l;

int gbp(int x, int y, int d){
    if(y > 300 || y < 0)
        return 400*60000;
    if(x == n)
        return memo[x][y] = d + abs(l[x]-y);
    if(memo[x][y] != -1)
        return memo[x][y];
    return memo[x][y] = min(gbp(x+1,y+1,d), gbp(x+1,y-1,d)) + abs(l[x]-y);
}

int main(){
    ifstream fin("pajaros.in");
    //ifstream fin("in.txt");
    ofstream fout("pajaros.out");
    fin >> n;

    memset(memo, -1, sizeof memo);

    l.push_back(0);
    while(fin >> a)
        l.push_back(a);

    fout << gbp(0,0,0) << endl;
}
