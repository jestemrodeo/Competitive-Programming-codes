#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("pista.in","r",stdin);
	freopen("pista.out","w",stdout);
	int cant;
	cin>>cant;
	
	int cuadras[cant];
	for(int i=1; i<=cant; i++){
		cin>>cuadras[i];
	}
	int j;
	int longmayor;
	int desde,hasta;
	for(int i=1; i<=cant; i++){
		j=i+1;
		desde=i;
		int longitud=0;
		while(cuadras[i]>cuadras[j]){
			longitud++;
			i=j;
			j++;
		}
		if(longitud>=longmayor){
			longmayor=longitud;
		}
		i=j;
	}
	
	for(int i=cant; i>0; i--){
		j=i-1;
		desde=i;
		int longitud=0;
		while(cuadras[i]>cuadras[j]){
			longitud++;
			i=j;
			j--;
		}
		if(longitud>=longmayor){
			longmayor=longitud;
			hasta=i;
		}
		i=j;
	}
	cout<<desde<<" "<<hasta<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
