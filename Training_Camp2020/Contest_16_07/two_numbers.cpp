#include<cstdio>
#include<iostream>

using namespace std;

int f1(int n, int m){
	int c=0;
	int obj=m/2;
		if(obj<n){
			while(n>obj){
				n-=1;
				c++;
			}
			c++;
			return c;
		}
		else{
			while(n<obj){
				n=n*2;
				c++;
			}
			if(n==obj){
				return c;
			}
			else{
				while(n>obj){
					n-=1;
					c++;
				}
				c++;
				return c;
			}
		}
}

int f2(int n, int m){
	int c=0;
	while((n*2)<m){
			n=n*2;
			c++;
		}
		if((n*2)==m){
			c++;
			return c;
		}
		else{
			while(((n*2)-m)>1){
				n=n-1;
				c++;
			}
			c++;
			return c;
		}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin>>n>>m;
	if(n>m){
		cout<<n-m<<"\n";
	}
	else if(n==m){
		cout<<0<<"\n";
	}
	else{
		cout<<min(f1(n,m),f2(n,m))<<"\n";
	}
}