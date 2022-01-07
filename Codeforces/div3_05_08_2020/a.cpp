#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int ct; cin>>ct;
	for(int t=0; t<ct; t++){
        int n; cin>>n;
        bool no = false;
        vector<int> nums (n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++){
            if(nums[i+1]-nums[i]>1){
                if(!no){
                    cout<<"NO\n";
                    no = true;
                }
            }
        }
        if(!no){
            cout<<"YES\n";
        }
	}
}
