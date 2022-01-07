#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(const pair<char,long long> &a,const pair<char,long long> &b){
	if(a.second==b.second){
		return a.first<b.first;
	}
	return a.second>b.second;
}
	
int main() {
	sort(rta.begin(),rta.end(),comp);
}
