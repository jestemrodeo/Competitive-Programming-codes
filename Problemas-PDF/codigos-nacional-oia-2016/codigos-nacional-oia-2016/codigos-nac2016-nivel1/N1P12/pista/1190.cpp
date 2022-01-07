#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream archivoE ("pista.in");
	ofstream archivoS ("pista.out");
	int N;
	archivoE>>N;
	int E[N+2];
	int C=0;
	int L=0;
	int B[N][2];
	int zp=0;
	int zv=0;
	int e=0;
	int Pi[N];
	int Va[N];
	for(int i=1;i<N+1;i++){
		archivoE>>E[i];
	}
	if(E[1]<E[2]){
		Va[0]=1;
		zv=1;
		e=-1;
	}else if(E[1]>E[2]){
		Pi[0]=1;
		zp=1;
		e=1;
	}else{
		Pi[0]=1;
		Va[0]=1;
		zp=1;
		zv=1;
	} 
	for(int i=2;i<N;i++){
		if(E[i] < E[i-1]){
			if (E[i]< E[i+1]){
				Va[zv]=i;
				zv++;
				if(e==0){
					e=-1;
				}
			}
		}else if(E[i] > E[i-1]){
			if (E[i]> E[i+1]){
				Pi[zp]=i;
				zp++;
				if(e==0){
					e=1;
				}
			}
		}
		if(E[i]==E[i+1]){
			Va[zv]=i;
			Pi[zp]=i;
			zv++;
			zp++;
		}
	}
	if(E[N]<E[N-1]){
		Va[zv]=N;
		zv++;
		if(e==0){
			e=-1;
		}
	}else if(E[N]>E[N-1]){
		Pi[zp]=N;
		zp++;
		if(e==0){
			e=1;
		}
	}else{
		Pi[zp]=N;
		Va[zv]=N;
		zp++;
		zv++;
	} 
	if(e==1){
		for(int i=0;i<zp;i++){
			int a=0;
			if(Pi[i]==Va[i]){
				a=1;
			}else{
				if(Va[i]-Pi[i]>L){
					C=1;
					B[0][0]=Pi[i];
					B[0][1]=-1;
					L=Va[i]-Pi[i];
				}else if(Va[i]-Pi[i]==L){
					B[C][0]=Pi[i];
					B[C][1]=-1;
					C++;
				}
			}
			if(i==zp-1 && zp==zv){
				a=1;
			}
			if(a==0){
				if(Pi[i+1]-Va[i]>L){
					C=1;
					B[0][0]=Pi[i+1];
					B[0][1]=1;
					L=Pi[i+1]-Va[i];
				}else if(Pi[i+1]-Va[i]==L){
					B[C][0]=Pi[i+1];
					B[C][1]=1;
					C++;
				}
			}
		}
	}else if(e==-1){
		for(int i=0;i<zv;i++){
			int a=0;
			if(Pi[i]==Va[i] || zp<zv){
				a=1;
			}else{
				if(Pi[i]-Va[i]>L){
					C=1;
					B[0][0]=Pi[i];
					B[0][1]=1;
					L=Pi[i+1]-Va[i];
				}else if(Pi[i+1]-Va[i]==L){
					B[C][0]=Pi[i];
					B[C][1]=1;
					C++;
				}
				
			}
			if(i==zv-1 && zp==zv){
				a=1;
			}
			if(a==0){
				if(Va[i+1]-Pi[i]>L){
					C=1;
					B[0][0]=Pi[i];
					B[0][1]=-1;
					L=Va[i]-Pi[i];
				}else if(Va[i+1]-Pi[i]==L){
					B[C][0]=Pi[i];
					B[C][1]=-1;
					C++;
				}
			}
		}
	}
	archivoS<<C<<' '<<L<<endl;
	for(int i=0;i<C;i++){
		archivoS<<B[i][0]<<' '<<B[i][0]-(B[i][1]*L)<<endl;	
	}
	return 0;
}
