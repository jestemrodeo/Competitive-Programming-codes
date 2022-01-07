#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream archivoE ("pista.in");
	ofstream archivoS ("pista.out");
	int N;
	archivoE>>N;
	int E[N+1];
	int a=0;
	int C=0;
	int L=0;
	int B[N][2];
	int P=1;
	int d=0;
	for(int i=1;i<N+1;i++){
		archivoE>>E[i];
		if(E[i]<a){
			if(d==1){
				if(i-1-P>L){
					B[0][0]=i-1;
					B[0][1]=1;
					C=1;
					L=i-1-P;
				}else if (i-1-P==L){
					B[C][0]=i-1;
					B[C][1]=1;
					C++;
				}
				P=i-1;
			}
			d=-1;
		}else if (E[i]>a){
			if(d==-1){
				if(i-1-P>L){
					B[0][0]=P;
					B[0][1]=-1;
					C=1;
					L=i-1-P;
				}else if (i-1-P==L){
					B[C][0]=P;
					B[C][1]=-1;
					C++;
				}
				P=i-1;
			}
			d=1;
		}else{
			if(d==1){
				if(i-1-P>L){
					B[0][0]=i-1;
					B[0][1]=1;
					C=1;
					L=i-1-P;
				}else if (i-1-P==L){
					B[C][0]=i-1;
					B[C][1]=1;
					C++;
				}
				P=i;
			}else if(d==-1){
				if(i-1-P>L){
					B[0][0]=P;
					B[0][1]=-1;
					C=1;
					L=i-1-P;
				}else if (i-1-P==L){
					B[C][0]=P;
					B[C][1]=-1;
					C++;
				}
				P=i;
			}
			d=0;
		}
		a=E[i];
	}
	if(N-P>L){
		if(d==1){
			B[0][0]=N;
			B[0][1]=1;
		}else{
			B[0][0]=P;
			B[0][1]=-1;
		}
		C=1;
		L=N-1-P;
	}else if (N-P==L){
		if(d==1){
			B[C][0]=N;
			B[C][1]=1;
		}else{
			B[C][0]=P;
			B[C][1]=-1;
		}
		C++;
	}
	archivoS<<C<<' '<<L<<endl;
	for(int i=0;i<C;i++){
	archivoS<<B[i][0]<<' '<<B[i][0]-(B[i][1]*L)<<endl;	
	}	
	return 0;
}
