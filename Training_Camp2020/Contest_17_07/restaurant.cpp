#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	vector<pair<int,int>> v(n);
	for(int i=0; i<n; i++){
		int a,b;
		cin>>a>>b;
		v[i] = {b,a};
	}
	sort(v.begin(), v.end());
	pair<int,int> orden = v[0];
	int cant=1;
	for(int i=1; i<n; i++){
		if(v[i].second > orden.first){
			cant++;
			orden = v[i];
		}
	}
	cout<<cant<<"\n";
}



