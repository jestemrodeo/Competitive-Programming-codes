#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,sum;
	cin>>s;
	int v[s];
	for(int i=0; i<s; i++){
		cin>>v[i];
	}
	cout<<*max_element(v, v+s)<<endl;
	cout<<*min_element(v, v+s)<<endl;
	sum=v[0]+v[1]+v[2];
	cout<<sum<<endl;
	return 0;
}
