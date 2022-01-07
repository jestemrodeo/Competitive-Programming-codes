#include <string>
#include <iostream>

using namespace std;

string desvela(string captado, string conocido)
{
	int longitud = conocido.size();
	int largo = captado.size();
	int x = 0; 
	string recorre;
	while (x < longitud){
		if (conocido[x] == ' ' || conocido[x] == '*'){
		}
		else{
			recorre.push_back(conocido[x]);
		}
		x++;
	} 
	longitud = recorre.size();
	int u,v;
	bool encontrada = true;
	int primero, segundo;
	for ( int i=0; i<largo; i++){
		encontrada = true;
		u = captado[i] - 'A'; 
		v = recorre[i] - 'A';
//		cout << "u= " << u << endl; 
		primero = v - u;
		while ( primero < 0){
			primero = primero + 26; 
		}
//		cout << "primero = " << primero << endl; 
		u = captado[i+1] - 'A';
		v = recorre[i+1] - 'A';
		segundo = v - u;
		while ( segundo < 0){
			segundo = segundo + 26;
		}
		int c = i+2;
		while ( c < longitud){
			if (recorre[c] == captado[c+i] + primero){
				c++;
			}
			else{
				encontrada = false;
				break;
			}
			if (c < longitud && encontrada == true){
				if ( recorre[c] == captado[c+i] + segundo){
					c++;
				}
				else{
					encontrada = false;
					break;
				}
			} 
		} 
		if ( encontrada == true ){
//			cout << "primero = " << primero << " segundo =  " << segundo << endl; 
			break;
		}
	}
	if ( largo%2 == 0){
		for ( int i=0; i<largo; i=i+2){
			captado[i] = captado[i] + primero;
			captado[i+1] = captado[i+1] + segundo;
		}
	}
	else{
		for ( int i=0; i<largo-1; i=i+2){
			captado[i] = captado[i] + primero;
			captado[i+1] = captado[i+1] + segundo;
		}
		captado[largo-1] = captado[largo-1] + primero;
	}
	
    return captado;
}
