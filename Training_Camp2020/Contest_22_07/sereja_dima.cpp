#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	deque<int> dq;
	for(int i=0; i<n; i++){
		int t; cin>>t;
		dq.push_back(t);
	}
	int sereja=0, dima=0;
	bool turno=true;
	while(!dq.empty()){
		if(dq.front()>dq.back()){
			if(turno){
				sereja+=dq.front();
			}
			else{
				dima+=dq.front();
			}
			dq.pop_front();
		}
		else{
			if(turno){
				sereja+=dq.back();
			}
			else{
				dima+=dq.back();
			}
			dq.pop_back();
		}
		turno = !turno;
	}
	cout<<sereja<<" "<<dima<<"\n";
}

