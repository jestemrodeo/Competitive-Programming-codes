#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	for(int test=0; test<t; test++){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		bool todosPares=true;
		bool todosIguales=true;
		bool todosImpares=true;
		int act = v[0];
		int sumaTotal=0;
		for(int i=0; i<n; i++){
			if(v[i]%2!=0){
				todosPares=false;
			}
			else{
				todosImpares=false;
			}
			if(v[i]!=act){
				todosIguales=false;
			}
			sumaTotal+=v[i];
		}
		if(sumaTotal%2!=0){
			cout<<"YES\n";
		}
		else if(todosPares){
			cout<<"NO\n";
		}
		else if(todosIguales and sumaTotal%2==0){
			cout<<"NO\n";
		}
		else if(todosImpares and n%2==0){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
}