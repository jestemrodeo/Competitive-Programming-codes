#include <string>


using namespace std;

string desvela(string captado, string conocido)
{
	int longitud = conocido.size();
	int largo = captado.size();
	int c;
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
	int y=0;
	for ( int i=0; i<largo; i++){
		encontrada = true;
		switch (captado[i]){
	case 'A':
		u = 0;
		break;
	case 'B':
		u = 1;
		break;
	case 'C':
		u = 2;
		break;
	case 'D':
		u = 3;
		break;
	case 'E':
		u = 4;
		break;
	case 'F':
		u = 5;
		break;
	case 'G':
		u = 6;
		break;
	case 'H':
		u = 7;
		break;
	case 'I':
		u = 8;
		break;
	case 'J':
		u = 9;
		break;
	case 'K':
		u = 10;
		break;
	case 'L':
		u = 11;
		break;
	case 'M':
		u = 12;
		break;
	case 'N':
		u = 13;
		break;
	case 'O':
		u = 14;
		break;
	case 'P':
		u = 15;
		break;
	case 'Q':
		u = 16;
		break;
	case 'R':
		u = 17;
		break;
	case 'S':
		u = 18;
		break;
	case 'T':
		u = 19;
		break;
	case 'U':
		u = 20;
		break;
	case 'V':
		u = 21;
		break;
	case 'W':
		u = 22;
		break;
	case 'X':
		u = 23;
		break;
	case 'Y':
		u = 24;
		break;
	case 'Z':
		u = 25;
		break;
	} 
		primero = -u;
		switch (captado[i]){
	case 'A':
		u = 0;
		break;
	case 'B':
		u = 1;
		break;
	case 'C':
		u = 2;
		break;
	case 'D':
		u = 3;
		break;
	case 'E':
		u = 4;
		break;
	case 'F':
		u = 5;
		break;
	case 'G':
		u = 6;
		break;
	case 'H':
		u = 7;
		break;
	case 'I':
		u = 8;
		break;
	case 'J':
		u = 9;
		break;
	case 'K':
		u = 10;
		break;
	case 'L':
		u = 11;
		break;
	case 'M':
		u = 12;
		break;
	case 'N':
		u = 13;
		break;
	case 'O':
		u = 14;
		break;
	case 'P':
		u = 15;
		break;
	case 'Q':
		u = 16;
		break;
	case 'R':
		u = 17;
		break;
	case 'S':
		u = 18;
		break;
	case 'T':
		u = 19;
		break;
	case 'U':
		u = 20;
		break;
	case 'V':
		u = 21;
		break;
	case 'W':
		u = 22;
		break;
	case 'X':
		u = 23;
		break;
	case 'Y':
		u = 24;
		break;
	case 'Z':
		u = 25;
		break;
	}
//		cout << "u= " << u << endl; 
		primero = primero + u;
		while ( primero < 0){
			primero = primero + 26; 
		}
//		cout << "primero = " << primero << endl; 
		switch (captado[i]){
	case 'A':
		u = 0;
		break;
	case 'B':
		u = 1;
		break;
	case 'C':
		u = 2;
		break;
	case 'D':
		u = 3;
		break;
	case 'E':
		u = 4;
		break;
	case 'F':
		u = 5;
		break;
	case 'G':
		u = 6;
		break;
	case 'H':
		u = 7;
		break;
	case 'I':
		u = 8;
		break;
	case 'J':
		u = 9;
		break;
	case 'K':
		u = 10;
		break;
	case 'L':
		u = 11;
		break;
	case 'M':
		u = 12;
		break;
	case 'N':
		u = 13;
		break;
	case 'O':
		u = 14;
		break;
	case 'P':
		u = 15;
		break;
	case 'Q':
		u = 16;
		break;
	case 'R':
		u = 17;
		break;
	case 'S':
		u = 18;
		break;
	case 'T':
		u = 19;
		break;
	case 'U':
		u = 20;
		break;
	case 'V':
		u = 21;
		break;
	case 'W':
		u = 22;
		break;
	case 'X':
		u = 23;
		break;
	case 'Y':
		u = 24;
		break;
	case 'Z':
		u = 25;
		break;
	}
		segundo = -u;
		switch (captado[i]){
	case 'A':
		u = 0;
		break;
	case 'B':
		u = 1;
		break;
	case 'C':
		u = 2;
		break;
	case 'D':
		u = 3;
		break;
	case 'E':
		u = 4;
		break;
	case 'F':
		u = 5;
		break;
	case 'G':
		u = 6;
		break;
	case 'H':
		u = 7;
		break;
	case 'I':
		u = 8;
		break;
	case 'J':
		u = 9;
		break;
	case 'K':
		u = 10;
		break;
	case 'L':
		u = 11;
		break;
	case 'M':
		u = 12;
		break;
	case 'N':
		u = 13;
		break;
	case 'O':
		u = 14;
		break;
	case 'P':
		u = 15;
		break;
	case 'Q':
		u = 16;
		break;
	case 'R':
		u = 17;
		break;
	case 'S':
		u = 18;
		break;
	case 'T':
		u = 19;
		break;
	case 'U':
		u = 20;
		break;
	case 'V':
		u = 21;
		break;
	case 'W':
		u = 22;
		break;
	case 'X':
		u = 23;
		break;
	case 'Y':
		u = 24;
		break;
	case 'Z':
		u = 25;
		break;
	}
		segundo = segundo + u;
		while ( segundo < 0){
			segundo = segundo + 26;
		}
	    c = y+2;
		while ( c < longitud){
			if (captado[c+i]  == recorre[c] + primero){
				c++;
			}
			else{
				encontrada = false;
				break;
			}
			if (c < longitud && encontrada == true){
				if ( captado[c+i] == recorre[c] + segundo){
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
			while (captado[i] > 'Z'){
				captado[i] = captado[i] - 'Z';
			}
			captado[i+1] = captado[i+1] + segundo;
			while (captado[i+1] > 'Z'){
				captado[i+1] = captado[i+1] - 'Z';
			}
		}
	}
	else{
		for ( int i=0; i<largo-1; i=i+2){
			captado[i] = captado[i] + primero;
			while (captado[i] > 'Z'){
				captado[i] = captado[i] - 'Z';
			}
			captado[i+1] = captado[i+1] + segundo;
			while (captado[i+1] > 'Z'){
				captado[i+1] = captado[i+1] - 'Z';
			}
		}
		captado[largo-1] = captado[largo-1] + primero;
		while (captado[largo-1] > 'Z'){
				captado[largo-1] = captado[largo-1] - 'Z';
			}
	}
	
    return captado;
}
