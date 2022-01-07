#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int j,q,p;
	cin>>j>>q>>p;
	int c=0;
	while(j && q && p){
		c++;
		j--;
		q--;
		p--;
	}
	while(j>=2 && p){
		c++;
		j-=2;
		p--;
	}
	cout<<c<<"\n";
}

