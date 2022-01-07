#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("baldosas.in","r",stdin);
	string baldosas;
	cin>>baldosas;
	vector<char> baldosasvector;
	for(int i=0; i<baldosas.length(); i++){
		baldosasvector.push_back(baldosas[i]);
	}
	char comb1[3]={'R','A','V'},comb2[3]={'A','V','R'},comb3[3]={'V','R','A'};
	vector<char>::iterator it=baldosasvector.begin();
	vector<char>::iterator it2;
	int i=0;
	bool trabaje=true;
	it2=find(baldosasvector.begin(),baldosasvector.end(),'R');
	if(it2!=baldosasvector.end()){
		int i=1;
		it2++;
		while(trabaje){
			if(it2==baldosasvector.end()){
				it2=baldosasvector.begin();
			}
			if(i==3){
				i=0;
			}
			if(*it2=='R'){
				trabaje=false;
			}
			else{
				*it2=comb1[i];
			}
			it2++;
			i++;
		}		
	}
	else{
		it2=find(baldosasvector.begin(),baldosasvector.end(),'A');
		if(it2!=baldosasvector.end()){
			int i=1;
			it2++;
			while(trabaje){
				if(it2==baldosasvector.end()){
					it2=baldosasvector.begin();
				}
				if(i==3){
					i=0;
				}
				if(*it2=='A'){
					trabaje=false;
				}
				else{
					*it2=comb2[i];
				}
				it2++;
				i++;
			}	
		}
		else{
			it2=find(baldosasvector.begin(),baldosasvector.end(),'V');
			if(it2!=baldosasvector.end()){
				int i=1;
				it2++;
				while(trabaje){
					if(it2==baldosasvector.end()){
						it2=baldosasvector.begin();
					}
					if(i==3){
						i=0;
					}
					if(*it2=='V'){
						trabaje=false;
						}
					else{
						*it2=comb3[i];
					}
					it2++;
					i++;
				}	
			}
		}
	}
	it=baldosasvector.begin();
	while(it!=baldosasvector.end()){
		cout<<*it;
		it++;
	}
	cout<<endl;
	fclose(stdin);
	return 0;
}
