#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("extremas.in","r",stdin);
	int cant;
	cin>>cant;
	string palabra;
	vector<int> letras(26);
	vector< vector<string> > palabrasguardadas(26);
	int temp;
	vector<string>::iterator it;
	for(int i=0; i<cant; i++){
		cin>>palabra;
		temp=palabra[0]-97;
		letras[temp]++;
		it=find(palabrasguardadas[temp].begin(),palabrasguardadas[temp].end(),palabra);
		if(it==palabrasguardadas[temp].end()){
			palabrasguardadas[temp].push_back(palabra);
		}
		temp=palabra[palabra.length()-1]-97;
		letras[temp]++;
		it=find(palabrasguardadas[temp].begin(),palabrasguardadas[temp].end(),palabra);
		if(it==palabrasguardadas[temp].end()){
			palabrasguardadas[temp].push_back(palabra);
		}
	}
	int mayor=0;
	int posmayor;
	for(int i=0; i<26; i++){
		if(letras[i]>mayor){
			mayor=letras[i];
			posmayor=i;
		}
	}
	char letramayor=posmayor+97;
	cout<<letramayor<<endl;
	vector <string>::iterator it2;
	it2=palabrasguardadas[posmayor].begin();
	while (!palabrasguardadas[posmayor].empty()){
		cout<<*it2<<endl;
		it2=palabrasguardadas[posmayor].erase(it2);
	}
	fclose(stdin);
	return 0;
}
