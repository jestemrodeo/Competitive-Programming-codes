#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int ct; cin>>ct;
	for(int t=0; t<ct; t++){
        int n; cin>>n;
        bool no = false;
        vector<int> a (n);
        int min_a;
        int min_b;
        vector<int> b (n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i==0){
                min_a=a[i];
            }
            else{
                min_a = min(min_a, a[i]);
            }
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
            if(i==0){
                min_b=b[i];
            }
            else{
                min_b = min(min_b, b[i]);
            }
        }
        unsigned long long c=0;
        for(int i=0; i<n; i++){
            c += max((a[i]-min_a),b[i]-min_b);
        }
        cout<<c<<"\n";
    }
}
