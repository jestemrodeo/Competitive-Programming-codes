#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		if (x > 45){
			cout<<"-1\n"; continue;
		}
		else if(x<10){
			cout<<x<<"\n"; continue;
		}
		
		int num=0, sum=0;
		string fnum = "";
		while(sum<x){
			int ind = 0;
			fnum += " ";
			bool encontro = false;
			for(int i=1; i<9; i++){
				fnum[ind] = to_string(i);
				int auxsum=0;
				for(int j=0; j<fnum.size(); j++){
					auxsum+= fnum[j] - '0';
				}
				if(auxsum == x){
					encontro = true;
					break;
				}
			}
			ind ++;
		}
	}
}

