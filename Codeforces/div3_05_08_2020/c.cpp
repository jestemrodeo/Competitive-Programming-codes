#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int ct; cin>>ct;
	for(int t=0; t<ct; t++){
        int n; cin>>n;
        vector<int> pesos (50000);
        vector<int> nums (n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        int maxPeso = 0;
        int minPeso = 500000;
        for(int i=0; i<n-1; i++){
            vector<int> usados(50000,0);
            vector<int> reset;
            for(int j=i+1; j<n; j++){
                int pesoTeam = nums[i]+nums[j];
                maxPeso = max(maxPeso, pesoTeam);
                minPeso = min(minPeso, pesoTeam);
                if(!usados[pesoTeam]){
                    pesos[pesoTeam]++;
                    usados[pesoTeam] = 1;
                    reset.push_back(pesoTeam);
                }
            }
            for( auto r : reset){
                usados[r] = 0;
            }
        }
        int resp=0;
        for(int i=minPeso; i<maxPeso; i++){
            resp = max(pesos[i],resp);
        }
        cout<<resp<<"\n";
	}
}
