#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	freopen("mural.in","r",stdin);
	freopen("mural.out","w",stdout);
	/*
	9 8 9
	1 A 1 9
	6 Z 5 9
	3 Z 3 9
	2 R 6 9
	4 A 1 3
	5 Z 1 5
	9 Z 1 6
	8 R 4 6
	5 Z 2 8
	2 R 1 3
	9 Z 2 9
	4 A 1 9
	6 A 2 9
	7 Z 1 9
	1 Z 3 9
	8 R 7 9
	3 Z 1 9 
	*/
	int n,cf,cc; cin>>n>>cf>>cc;
	vector<string>fil(n+1,".");
	vector<string>col(n+1,".");
	for(int i=0; i<n+1; i++){
		fil[i].replace(0,1,n+2,'.');
	}
	for(int i=0; i<n+1; i++){
		col[i].replace(0,1,n+2,'.');
	}

	vector<vector<char>> m(n+1,vector<char> (n+1));
	
	for(int i=0; i<cf; i++){
		int f, principio, fin;
		char color;
		cin>>f>>color>>principio>>fin;
		for(int j=principio; j<=fin; j++){
			fil[f][j]= color;
		}
	}
	for(int i=0; i<cc; i++){
		int f, principio, fin;
		char color;
		cin>>f>>color>>principio>>fin;
		for(int j=principio; j<=fin; j++){
			col[f][j]= color;
		}
	}
	
//	for(int i=1; i<n+1; i++){
//		cout<<fil[i]<<"\n";
//	}
//	cout<<"---------\n";
//	
//	for(int i=1; i<n+1; i++){
//		cout<<col[i]<<"\n";
//	}
//	cout<<"------------\n";
//	
	
	for(int i=1; i<n+1; i++){
		for(int j=1; j<n+1; j++){
//			m[j][i];
			if(col[i][j] == '.'){
				switch (fil[j][i]) {
					case '.':
						m[j][i]='.';
						break;
					case 'R':
						m[j][i]='R';
						break;
					case 'Z':
						m[j][i]='Z';
						break;
					case 'A':
						m[j][i]='A';
						break;
				}
			}
			else if(col[i][j] == 'R'){
				switch (fil[j][i]){
				case '.':
					m[j][i]='R';
					break;
				case 'Z':
					m[j][i]='P';
					break;
				case 'A':
					m[j][i]='N';
					break;
				case 'R':
					m[j][i]='R';
					break;
				}
			}
			else if(col[i][j] == 'Z'){
				switch (fil[j][i]){
				case '.':
					m[j][i]='Z';
					break;
				case 'R':
					m[j][i]='P';
					break;
				case 'A':
					m[j][i]='V';
					break;
				case 'Z':
					m[j][i]='Z';
					break;
				}
			}
			else if(col[i][j] == 'A'){
				switch (fil[j][i]){
				case '.':
					m[j][i]='A';
					break;
				case 'Z':
					m[j][i]='V';
					break;
				case 'R':
					m[j][i]='N';
					break;
				case 'A':
					m[j][i]='A';
					break;
				}
			}
		}
	}
	for(int i=1; i<m.size(); i++){
		for(int j=1; j<m[i].size(); j++){
			cout<<m[i][j];
		}
		cout<<"\n";
	}
}

