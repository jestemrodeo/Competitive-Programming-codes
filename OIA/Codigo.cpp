#include<bits/stdc++.h>
using namespace std;
ifstream entra;
ofstream sale;
int main(){
	freopen("codigo.in","r",stdin);
	freopen("codigo.out","w",stdout);
	string RESP="";
	string codigo;
	int j=0;
	while (cin>>codigo){
		if (j!=0){
		RESP+="xx";
	}
		for(int i=0; i<codigo.length(); i++){
				if(i!=0){
		RESP+="x";
	}
		switch(codigo[i]){
		case 'A': RESP+=".-";
		break;
		case 'B': RESP+="-...";
		break;
		case 'C': RESP+="-.-.";
		break;
		case 'D': RESP+="-..";
		break;
		case 'E': RESP+=".";
		break;
		case 'F': RESP+="--.";
		break;
		case 'G': RESP+="--.";
		break;
		case 'H': RESP+="....";
		break;
		case 'I': RESP+="..";
		break;
		case 'J': RESP+=".---";
		break;
		case 'K': RESP+="-.-";
		break;
		case 'L': RESP+=".-..";
		break;
		case 'M': RESP+="--";
		break;
		case 'N': RESP+="-.";
		break;
		case 'Ñ': RESP+="--.--";
		break;
		case 'O': RESP+="---";
		break;
		case 'P': RESP+=".--.";
		break;
		case 'Q': RESP+="--.-";
		break;
		case 'R': RESP+=".-.";
		break;
		case 'S': RESP+="...";
		break;
		case 'T': RESP+="-";
		break;
		case 'U': RESP+="..-";
		break;
		case 'V': RESP+="...-";
		break;
		case 'W': RESP+=".--";
		break;
		case 'X': RESP+="-..-";
		break;
		case 'Y': RESP+="-.--";
		break;
		case 'Z': RESP+="--..";
		break;
	}
	}
	j++;
	}
	cout<<RESP<<endl;
	return 0;
}
