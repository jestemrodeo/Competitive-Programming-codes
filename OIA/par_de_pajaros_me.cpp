#include <bits/stdc++.h>

using namespace std;

int cant;
int const ALT_MAX=301;
vector<int> vuelo;
vector<int> pajaro;
vector<int> memo;



int dp(int n,int d){
	if(memo[n]!=ALT_MAX){
		return memo[n];
	}
	else {
		memo[n]=memo[n-1]+min(abs(vuelo[n]-dp(pajaro[n-1],+1)),
							  abs(vuelo[n]-dp(pajaro[n-1],-1)));
		pajaro[n]=vuelo[n]-memo[n];
		return memo[n];
	}
}

	
	
	
int main() {
	freopen("pajaros.in","r",stdin);
	
	cin>>cant;
	vuelo.resize(cant+1,ALT_MAX);
	pajaro.resize(cant+1,ALT_MAX);
	memo.resize(cant+1,ALT_MAX);
	pajaro[0]=0;
	pajaro[1]=1;
	if(abs((pajaro[1]+1)-vuelo[2])<=abs((pajaro[1]-1)-vuelo[2]){
		pajaro[2]=
	}
	memo[0]=0;
	memo[1]=abs(vuelo[1]-pajaro[1]); //2
	
	for(int i=1; i<=cant; i++){
		cin>>vuelo[i];
	}
	pajaro[0]=0;
	pajaro[1]=1;
	
	memo[cant+1]=
	
	fclose(stdin);
}

