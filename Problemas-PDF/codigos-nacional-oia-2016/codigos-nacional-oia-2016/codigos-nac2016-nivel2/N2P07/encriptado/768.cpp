#include <string>
using namespace std;

int hola[10];
int claveFinal;
int porcentaje;
int add;
char asciinicial;
string criptado;

string encriptado(int clave, int N, string texto)
{
	//reducir la clave a N digitos:
	int porcentaje=1;
	for(int i=0; i<N; i++){
		porcentaje*=10;
	}
	claveFinal=clave%porcentaje;

	//separar la clave por digitos;
	for(int i=1; i<=N; i++){
		hola[N-i]=claveFinal%10;
		claveFinal/=10;
	}

	//criptar la frase:
	int largo= texto.length();
	for(int i=0; i<largo; i++){
        if(texto[i]!=' '){
            add=hola[i%N];
            asciinicial=(texto[i]-'A'+add)%26+'A';
            criptado+=asciinicial;
        }
	}

    return criptado;
}

//ABCDEFGHIJKMNOPQRSTUVWXYZ
//qwertyuiopasdfghjklzxcvbnm






