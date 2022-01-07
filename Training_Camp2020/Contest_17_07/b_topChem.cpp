#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	set<pair<int,int>> s;
	for(int i=0; i<n; i++){
		int ele,val;
		cin>>ele>>val;
		s.insert(make_pair(ele,val));
	}
	int m; cin>>m;
	for(int i=0; i<m; i++){
		int ele,val;
		cin>>ele>>val;
		auto it = s.lower_bound(make_pair(ele,0));
		if((*it).first == ele){
			if ((*it).second < val){
				s.erase(it);
				s.insert(make_pair(ele,val));
			}
		}
		else{
			s.insert(make_pair(ele,val));
		}
	}
	long long sum=0;
	for(auto i:s){
		sum+= i.second;
	}
	cout<<sum<<"\n";
}
