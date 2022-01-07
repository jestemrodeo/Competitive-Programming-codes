#include <iostream>
#include <fstream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
	ifstream archivoE("pajaros.in");
	ofstream archivoS("pajaros.out");
	int L;
	archivoE>>L;
	int a[L];
	long int v[301][2];
	for(int i=0;i<L;i++){
		archivoE>>a[i];
	}
	for(int i=1;i<301;i++){
		v[i][1]=-1;     
	}
	v[0][1]=0;
	for(int i=0;i<L;i++){
		for(int j=0;j<301;j++){
			v[j][0]=v[j][1];     
		}
		if(v[1][0]==-1){
			v[0][1]=-1;
		}else{
			v[0][1]=v[1][0]+a[i];
		}
		if(v[299][0]==-1){
			v[300][1]=-1;
		}else{
			v[300][1]=v[299][0]+abs(300-a[i]);
		}
		for(int j=1;j<300;j++){
			if(v[j-1][0]==-1 && v[j+1][0]==-1){
				v[j][1]=-1;
			}else if(v[j-1][0]==-1){
				v[j][1]=v[j+1][0]+abs(a[i]-j);
			}else if(v[j+1][0]==-1){
				v[j][1]=v[j-1][0]+abs(a[i]-j);
			}else{
				v[j][1]=min(v[j-1][0]+abs(a[i]-j),v[j+1][0]+abs(a[i]-j));
			}
		}
	}
	long int R=LONG_MAX;
	for(int i=0;i<301;i++){
		if(R>v[i][1] && v[i][1]>-1){
			R=v[i][1];
		}
	}
	archivoS<<R;
}
