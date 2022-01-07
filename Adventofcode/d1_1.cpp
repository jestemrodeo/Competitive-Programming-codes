#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	/*
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	*/
	freopen ("advent.in", "r", stdin);
	int n;cin>>n;
	vector<int> v (n);
	
	for(int i=0; i<v.size(); i++){
		cin>>v[i];
	}
	
	bool encontro = false;
	int n1,n2;
	for(int i=0; i<v.size()-1; i++){
		for(int j=i+1; j<v.size(); j++){
			if(v[i] + v[j] == 2020){
				n1 = v[i];
				n2 = v[j];
				encontro = true;
				break;
			}
		}
		if(encontro) break;
	}
	cout << " resp: " << n1 * n2 << endl;
	fclose(stdin);
}

