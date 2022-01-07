#include <string>

using namespace std;

string desvela(string captado, string conocido)
{
	int longitud = conocido.size();
	int largo = captado.size();
	char u,v;
	bool encontrada = true;
	int primero, segundo;
	for ( int i=0; i<largo; i++){
		u = captado[i];
		v = conocido[i];
		primero = v-u;
		if ( primero < 0){
			primero = primero + 26; 
		}
		u = captado[i+1];
		v = captado[i+1];
		segundo = v - u;
		if ( segundo < 0){
			segundo = segundo + 26;
		}
		int c = i+2;
		while ( c < longitud){
			if (conocido[c] == captado[c+i] + primero){
				c++;
			}
			else{
				encontrada = false;
				break;
			}
			if (c < longitud){
				if ( conocido[c] == captado[c+i] + segundo){
					c++;
				}
				else{
					encontrada = false;
					break;
				}
			} 
		} 
		if ( encontrada == true ){
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
