#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n+1,vector<int> (n+1));
    for(int i=1; i<n; i++){
        for(int j = 1; j<n; j++){
            int nt = i*j;
            if(n!=10){
                string st = to_string(nt);
                string num="";
                int num_actual = nt;
                while(num_actual>=n){
                    num+= to_string(num_actual%n);
                    num_actual = num_actual/n;
                }
                num+=to_string(num_actual);
                reverse(num.begin(), num.end());
                v[i][j] = stoi(num);
            }
            else{
                v[i][j]=nt;
            }
        }
    }
    for(int i=1; i<n; i++){
        for(int j = 1; j<n; j++){
            if(j!=1){
                cout<<" ";
            }
            cout<<v[i][j];
        }
        cout<<endl;
    } 
}