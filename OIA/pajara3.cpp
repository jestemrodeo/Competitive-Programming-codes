#include<bits/stdc++.h>
using namespace std;
int matriz[310][60010];
int pajara[60010];
int a;
int cant;
int b;
int parcial;
int dis=0;
int actual=0;
int main(){
	freopen("pajaros.in","r",stdin);
	cin>>cant;
	for(int i=0; i<cant; i++){
		cin>>a;
		pajara[i]=a;
	}
	for(int i=0; i<=cant-1; i++){
		if(i==cant-1){
			if(pajara[i+1]>actual){
				dis+=abs(pajara[i+1]-actual);	
			}
		}
		else{
			if(pajara[i+1]>actual){
			actual++;
			cout<<actual<<" ";
			dis+=abs(pajara[i]-actual);
			cout<<dis<<endl;
		}
			else{
				actual--;
				cout<<actual<<" ";
				dis+=abs(pajara[i]-actual);
				cout<<dis<<endl;
			}
		}
	}
	cout<<"---------------------------------"<<endl<<dis<<endl;
	fclose(stdin);
	return 0;
}
