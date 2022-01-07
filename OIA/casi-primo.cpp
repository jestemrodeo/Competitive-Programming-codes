#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("casi-primo.in","r",stdin);
	int desde,hasta,num,casiprimo;
	cin>>desde>>hasta>>num;
	int cantidad=0;
	for(int i=desde; i<=hasta; i++){
		casiprimo=0;
		for(int j=1; j<=num; j++){
			if(i%j!=0){
				casiprimo++;
			}
		}
		if(casiprimo==num-1){
			cantidad++;
		}
	}
	cout<<cantidad<<endl;
	fclose(stdin);
	return 0;
}
