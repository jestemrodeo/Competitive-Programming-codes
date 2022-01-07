#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n,m,a;
	cin>>n>>m>>a;

	vector<int> completado(n,0);
	int cuadros=0;
	for(int i = 0; i<n; i++){
		while(completado[i]<m){
			int j=i;
			while(j<(i+a) or j<n){
				completado[j]+=a;
				j++;
			}
			cuadros++;
		}
	}
	cout<<cuadros<<endl;
}