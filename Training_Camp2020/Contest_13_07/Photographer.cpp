#include <iostream>
#include <cstudio>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,mb,low,hig;
	cin>>n>>mb>>low>>hig;
	vector<pair<int,int>>clien(n);
	vector<int>atte;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		clien[i].first = ((a*low)+(b*hig));
		clien[i].second = i+1;
	}
	sort(clien.begin(),clien.end());
	for(int i=0;i<n;i++){
		if(mb-clien[i].first>=0){
			atte.push_back(clien[i].second);
			mb-=clien[i].first;
		}
		else{
			break;
		}
	}
	cout<<atte.size()<<"\n";
	for(int i=0;i<atte.size();i++){
		cout<<atte[i]<<" ";
	}
	return 0;
}
