#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream archivoE ("almacenamiento.in");
	ofstream archivoS ("almacenamiento.out");
	int C;
	int A;
	archivoE>>C;
	archivoE>>A;
	int L[C];
	int N=C;
	for(int i=0;i<C;i++){
		archivoE>>L[i];
	}
	int m=0;
	int v=0;
	for(int i=0;i<C;i++){
		while(m<A && v<C){
			m=m+L[v];
			v++;
		}
		if (m>=A && v-i<N){
			N=v-i;
		}
		m=m-L[i];
	}
	archivoS<<N<<endl;
	return 0;
}
