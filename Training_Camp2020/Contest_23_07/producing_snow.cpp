#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	int izq=0,der;
	multiset<int> s;
	for(int i=0; i<n; i++){
		der=i;
		int nieve, temp, derre=0;
		cin>>nieve>>temp;
		s.insert(nieve);
		for(auto num : s){
			if(num - temp > 0){
				derre+=temp;
				s.erase(s.find(num));
				s.insert(num-temp);
			}
			else{
				derre += temp;
				s.erase(s.find(num));
			}
		}
		if(i!=0){
			cout<<" ";
		}
		cout<<derre;
	}
}

