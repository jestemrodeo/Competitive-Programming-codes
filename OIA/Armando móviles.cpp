#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen ("colgantes.in","r",stdin);
	int cant;
	cin>>cant;
	int colgantes[cant];
	int temp;
	for(int i=0; i<cant; i++){
		cin>>temp;
		colgantes[i]=temp;
	}
	int cantvarillas=0, peso=0;
	for(int i=0; i<cant-1; i++){
		for(int j=i+1; j<cant; j++){
			if(colgantes[i]==colgantes[j]){
				cantvarillas++;
				peso+=colgantes[i]+colgantes[j];
			}
		}
	}
	cout<<peso<<" "<<cantvarillas<<endl;
	fclose(stdin);
    return 0;
}
