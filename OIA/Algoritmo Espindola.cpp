#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,count;
	count=0;
	cin>>n>>k;
	for(int i=1;i<=100;i++){
		for(int j=i;j<=100;j++){
			if(i*i+j*j>=n){
				break;
			}
			for(int l=j;l<=100;l++){
				if(i*i+j*j+l*l>=n){
					break;
				}
				for(int q=l;q<=100;q++){
					if(i*i+j*j+l*l+q*q>=n){
						break;
					}
					for(int r=q;r<=100;r++){
						if(i*i+j*j+l*l+q*q+r*r>=n){
							break;
						}
						for(int y=r;y<=100;y++){
							if(i*i+j*j+l*l+q*q+r*r+y*y==n){
								count++;
								break;
							}
						}
					}		
				}
			}
		}
	}
	cout<<count;
	return 0;
}
