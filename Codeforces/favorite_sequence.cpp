#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	for(int x=0; x<t; x++){
		int n; cin>>n;
		vector<int> v (n);
		int left = 0;
		int right = n-1;
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		vector<int> vd (n);
		for(int i=0; i<n; i++){
			if(i%2==0){
				vd[i] = v[left];
				left++;
			}
			else{
				vd[i] = v[right];
				right--;
			}
		}
		for(int i=0; i<n; i++){
			if(i){
				cout<<" ";
			}
			cout<<vd[i];
		}
		cout<<"\n";
	}
}

