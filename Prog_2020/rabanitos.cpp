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
		string rabanin, rabanon; cin>>rabanin>>rabanon;
		string izqRabanin, derRabanin, izqRabanon, derRabanon;
		int cRabanin = 0; 
		int cRabanon = 0;
		if(rabanin.size()%2==0){
			izqRabanin = rabanin.substr(0, (rabanin.size()/2));
			derRabanin = rabanin.substr((rabanin.size()/2));
		}
		else {
			izqRabanin = rabanin.substr(0, (rabanin.size()/2)+1);
			derRabanin = rabanin.substr((rabanin.size()/2));
		}
		if(rabanon.size()%2==0){
			izqRabanon = rabanon.substr(0, (rabanon.size()/2));
			derRabanon = rabanon.substr((rabanon.size()/2));
		}
		else {
			izqRabanon = rabanon.substr(0, (rabanon.size()/2)+1);
			derRabanon = rabanon.substr((rabanon.size()/2));
		}
		reverse(derRabanin.begin(), derRabanin.end());
		reverse(derRabanon.begin(), derRabanon.end());
		for(int i=0; i<izqRabanin.size(); i++){
			if(izqRabanin[i]!=derRabanin[i]){
				cRabanin++;
			}
		}
		for(int i=0; i<izqRabanon.size(); i++){
			if(izqRabanon[i]!=derRabanon[i]){
				cRabanon++;
			}
		}
		if(cRabanin<cRabanon){
			cout<<"RABANIN\n";
		}
		else if (cRabanon<cRabanin){
			cout<<"RABANON\n";
		}
		else{
			cout<<"DA IGUAL\n";
		}
		//-----------------------------------------------------
	}
}

