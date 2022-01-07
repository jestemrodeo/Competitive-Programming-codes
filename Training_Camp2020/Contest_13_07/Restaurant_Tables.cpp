#include<cstdio>
#include<iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int m1,m2,m2con1=0, con=0,can;
	cin>>can>>m1>>m2;
	m2=(m2*2);
	for(int i=0;i<can;i++){
		int t;
		cin>>t;
		if(t==1){
			if(m1>0){
				m1--;
			}
			else if(m2>=2){
				m2-=2;
				m2con1++;
			}
			else if(m2con1>0){
				m2con1--;
			}
			else{
				con+=t;
			}
		}
		else{
			if(m2>=2){
				m2=(m2-2);
			}
			else{
				con+=t;
			}
		}
	}	
	cout<<con<<"\n";
}