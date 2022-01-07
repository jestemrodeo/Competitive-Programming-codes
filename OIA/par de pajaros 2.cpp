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
	for(int i=1; i<cant; i++){
		if(pajara[i+2]>actual){
			actual++;
			dis+=abs(pajara[i]-actual);
		}
		else{
			actual--;
			dis+=abs(pajara[i]-actual);
		}
	}
	cout<<dis<<endl;
	fclose(stdin);
	return 0;
}
