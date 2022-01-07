#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin>>n;
	vector<int> v(n+1);
	vector<int> cv(n+1,0);
	for(int i=1; i<=n; i++){
		cin>>v[i];
		cv[v[i]]++;
	}
	int may=-1;
	int trip = -1;
	for(int i=1; i<=n; i++){
		if(cv[i]>may){
			may = cv[i];
			trip = i;
			cout<<"trip: "<<trip<<endl;
		}
		cout<<"cv: "<<cv[i]<<endl;
		cout<<"may "<<may<<endl;
	}
	bool nadie=false;
	for(int i=1; i<=n; i++){
		if(cv[i]==may && i != trip){
			cout<<"Nadie fue expulsado\n";
			nadie = true;
			break;
		}
	}
	if(!nadie){
		cout<<"#"<<trip<<" fue expulsado\n";
	}
}

