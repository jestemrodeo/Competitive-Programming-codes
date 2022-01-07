#include <stdc++.h>
using namespace std;
string z;
char acc, sentidoact='N';
int num, x, y,actx,acty;
void sentido(int n,char pos){
	if(n==1){
		switch(pos){
			case 'N':
				sentidoact='E';
				break;
			case 'E':
				sentidoact='S';
				break;
			case 'S':
				sentidoact='O';
				break;
			case 'O':
				sentidoact='N';
				break;
		}
	}
	else if(n==2){
		switch(pos){
			case 'N':
				sentidoact='S';
				break;
			case 'E':
				sentidoact='O';
				break;
			case 'S':
				sentidoact='N';
				break;	
			case 'O':
				sentidoact='E';
				break;
		}
	}
	else if(n==3){
		switch(pos){
			case 'N':
				sentidoact='O';
				break;
			case 'E':
				sentidoact='N';
				break;
			case 'S':
				sentidoact='E';
				break;	
			case 'O':
				sentidoact='S';
				break;
		}
	}
	else if (n==4){
		switch(pos){
			case 'N':
				sentidoact='N';
				break;
			case 'E':
				sentidoact='E';
				break;
			case 'S':
				sentidoact='S';
				break;	
			case 'O':
				sentidoact='O';
				break;
		}
	}
}
void mover(int a, b,){
	if()
}
int main (){
	cin>>actx>>acty;
	cin>>sentidoact;
	cin>>x>>y;
	getline(cin, z);
	for(int i=0; i<z.length(); i+2){
		for(int j=0; j<2; j++){
			cin>>acc>>num;
		}
		if (acc=='A'){
			mover(num,x,actx,acty,sentido);
		}
		else{
			sentido(num,sentidoact);
		}
	}
	return 0;
}
