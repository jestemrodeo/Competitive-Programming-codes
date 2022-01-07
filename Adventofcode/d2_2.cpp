#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define DBG(x) cerr<< #x <<": "<< (x) << "\n"

using namespace std;

int main() {
	freopen("advent2.in", "r", stdin);
	int n; cin>>n;
	int pass = 0;
	string s;
	getline(cin,s);
	for(int i=0; i<n; i++){
		getline(cin,s);
		
		int x=0;
		while(!isdigit(s[x])){
			x++;
		}
		
		string s1 = "", s2 = "";
		
		while(s[x]!='-'){
			s1 += s[x];
			x++;
		}
		int minT = stoi(s1);
		
		x++;
		
		while(s[x]!=' '){
			s2 += s[x];
			x++;
		}
		int maxT = stoi(s2);
		
		x++;
		
		char l = s[x];
		x+=2;
		minT = minT + x;
		maxT = maxT + x;
		/*
		DBG(l);
		DBG(s[minT]);
		DBG(s[maxT]);
		*/
		if(s[minT] == l && s[maxT] != l){
			//cout<<"SI igual distinto\n";
			pass++;
		}
		else if (s[minT] != l && s[maxT] == l){
			//cout<<"SI distinto igual\n";
			pass++;
		}
		//cout<<"-------------------------------------------------------------------------------\n";
	}
	cout<< pass <<"\n";
	fclose(stdin);
}

