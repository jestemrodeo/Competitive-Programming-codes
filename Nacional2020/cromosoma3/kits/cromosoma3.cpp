#include <string>
#include <vector>

using namespace std;

vector<int> sub1(string s) {
	vector<int> ret(4);
	if(s[0]!=s[1] && s[1]!=s[2] && s[2]!=s[3] && s[1]!=s[3]){
		ret[0] = -1;
		ret[1] = -1;
		ret[2] = -1;
		ret[3] = -1;
	}
	else if(s[0]==s[1] && s[1]==s[2] && s[2]==s[3]){
		ret[0] = 0;
		ret[1] = 1;
		ret[2] = 2;
		ret[3] = 3;
	}
	else {
		vector<int> cant(4,0);
		int c2=0;
		for(auto c:s){
			if(c=='A'){
				cant[0]++;
			}
			else if(c=='C'){
				cant[1]++;
			}
			else if(c=='G'){
				cant[2]++;
			}
			else if(c=='T'){
				cant[3]++;
			}
		}
		for(auto x: cant){
			if(x==2){
				c2++;
			}
		}
		if(c2==2){
			ret[0] = 0;
			ret[1] = 1;
			ret[2] = 2;
			ret[3] = 3;
		}
		else{
			ret[0] = -1;
			ret[1] = -1;
			ret[2] = -1;
			ret[3] = -1;
		}
	}
	return ret;
}

vector<int> cromosoma(string cadena) {
	vector<int> ret;
    if(cadena.size()==4){
		ret = sub1(cadena);
	}
	return ret;
}
