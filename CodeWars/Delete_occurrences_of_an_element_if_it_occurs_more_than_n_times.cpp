#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

vector<int> deleteNth(vector<int> arr, int n) {
	map<int,int> mp;
	vector<int> res;
	
	for (auto x : arr) {
		if (mp.count(x)>0){
			if(mp[x]<n){
				res.push_back(x);
				mp[x]++;
			}
		}
		else {
			res.push_back(x);
			mp[x] = 1;
		}
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	// TEST: 
	vector<int> v = {1,1,1,1,1,1};
	vector<int> r = deleteNth(v ,2);
	cout<<"[";
	int c = 0;
	for (auto x : r) {
		cout<<x;
		if(c<r.size()-1) cout<<",";
		c++;
	}
	cout<<"]\n";
}

