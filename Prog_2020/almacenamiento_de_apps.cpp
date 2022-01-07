#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, mb; cin>>n>>mb;
	vector<int> apps(n);
	for(int i=0; i<n; i++){
		cin>>apps[i];
	}
	int actmb = 0, cant_apps = 0;
	int min_apps = 50000;
	int i=0,j=0;
	for(i=0; i<n; i++){
		while(actmb<mb && j<n){
			actmb += apps[j];
			j++;
			cant_apps++;
		}
		if(actmb>=mb){
			min_apps = min(min_apps,cant_apps);
		}
		actmb-=apps[i];
		cant_apps--;
	}
	cout<<min_apps<<"\n";
}

