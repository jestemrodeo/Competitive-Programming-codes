#include <iostream>
#include <string>
#include<fstream>
using namespace std;
ifstream entra;
int main(){
	freopen("promedios.in","r",stdin);
	string nombres;
	string primer;
	int cant;
	cin>>cant;
	double num=0;
	double temp;
	double prom;
	getline(cin,primer);
	for(int i=0; i<cant; i++){
		getline(cin,nombres);
		for(int j=0; j<3; j++){
			cin>>temp;
			num+=temp;
		}
		prom=num/3;
		cout<<nombres<<endl<<prom<<endl;
		getline(cin,primer);
		num=0;
	}
	return 0;
}
