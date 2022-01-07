#include<bits/stdc++.h>
using namespace std;
int main (){
	int time[3],s;
	cin>>time[0]>>time[1]>>time[2];
	cin>>s;
	time[2]=time[2]+s;
	while(time[2]>=60){
		time[2]=time[2]-60;
		time[1]++;
		if(time[1]==60){
			time[1]=time[1]-60;
			time[0]++;
			if(time[0]==24){
				time[0]=time[0]-24;
			}
		}
	}
	
	for(int i=0; i<3; i++){
		if(i){
			cout<<" ";
		}
		cout<<time[i];
	}
	return 0;
}
