#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
	ifstream archivoE ("codigo.in");
	ofstream archivoS ("codigo.out");
	int N;
	int C;
	int L;
	archivoE>>N;
	archivoE>>C;
	archivoE>>L;
	int V[N];
	for(int i=N-1;i>-1;i--){
		V[i]=C%10;
		C=(C-V[i])/10;
	}
	int a=0;
	string S;
	getline(archivoE,S);
	getline(archivoE,S);
	for(int i=0;i<L;i++){
		if(S[i]!=' '){
			S[i]=(S[i]+V[a]-65)%26 +65;
			archivoS<<S[i];
			a=(a+1)%N;
		}
	}
	archivoS<<endl;
	return 0;
}
