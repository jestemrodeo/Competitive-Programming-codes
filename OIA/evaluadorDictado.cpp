// La siguiente linea se usa para compilar en Geany con F9. Compilando de otra forma, podria ser necesario quitarla.
#include "dictado.cpp"

#include <iostream>
#include <string>

using namespace std;

int  dictado( string palabra )
{
	queue <char> letras;
	
	for(int i=palabra.length()-2; i>=0; i--){
		letras.push(palabra[i]);
	}
	int count=0;
	bool pal=false;
	while(!pal){
		if (palabra.length()%2!=0){
			string subpal1=palabra.substr(0, (palabra.length()/2));
			string subpal2=palabra.substr((palabra.length()/2)+1, palabra.length());
			string sub2;
			
			for(int i=subpal2.length()-1; i>=0; i--){
				sub2.push_back(subpal2[i]);
			}
			pal=true;
			if(subpal1!=sub2){
				pal=false;
				palabra.push_back(letras.front());
				letras.pop();
				count++;
			}
			if(pal){
				return count;
			}
		}
		else{
			palabra.push_back(letras.front());
			letras.pop();
			count++;
		}
	}
}


int main()
{
    string s; cin >> s;
    cout << dictado(s) << endl;
    return 0;
}
