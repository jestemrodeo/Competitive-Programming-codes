#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > conexiones(1000001,vector<int>(1));
bool encontro;
bool pregunta(int pc1,int pc2){	//busca la conexion
	vector<int>::iterator it;
	it=find(conexiones[pc1].begin(),conexiones[pc1].end(),pc2);
		if(it!=conexiones[pc1].end()){
			encontro=true;
			cout<<*it<<endl;
			return encontro;
		}
		else {
			encontro=false;
			return encontro;
		}
}
char comando;
int main(){
	freopen("red.in","r",stdin);
	cin>>comando;
	int c1,c2;
	while(comando!='F'){
		if(comando=='C'){ //almacenar en el vector de vectores
			cin>>c1>>c2;
			conexiones[c1].push_back(c2);
			if (conexiones[c2].size()!=0){
				for(int i=0; i<conexiones[c2].size(); i++){
				int a;
				a=conexiones[c2][i];
				conexiones[c1].push_back(a);
			}
			}
			conexiones[c2].push_back(c1);
		}
		else if(comando=='P'){//preguntar si estan conectados
			cin>>c1>>c2;
			pregunta(c1,c2);
			if (encontro){
				cout<<'S'<<endl;
			}
			else{
				cout<<'N'<<endl;
			}
		}
		cin>>comando;
	}
	fclose(stdin);
	return 0;
}
