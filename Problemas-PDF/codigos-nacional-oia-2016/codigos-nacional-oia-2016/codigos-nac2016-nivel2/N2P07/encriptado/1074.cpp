#include <string>
using namespace std;

int hola[15];
int claveFinal;
int porcentaje;
int add;
char asciinicial;
string criptado;

string encriptado(int clave, int N, string texto)
{
	//reducir la clave a N digitos:
	int porcentaje=1;//hacer que al multiplicar no quede siempre 0.
	for(int i=0; i<=N; i++){//hace que se llegue a 10powN.
		porcentaje*=10;//multiplica por 10.
	}
	claveFinal=clave%porcentaje;//deja los ultimos N digitos.

	//separar la clave por digitos;
	for(int i=1; i<=N; i++){//recorre N para para poder separar los N digitos.
		hola[N-i]=claveFinal%10;//póne en el
		claveFinal/=10;
	}

	//criptar la frase:
	int largo= texto.length();
	for(int i=0; i<largo; i++){
        if(texto[i]!=' '){
            //add=hola[i%N];
            asciinicial=(texto[i]-'A'+hola[i%N])%26+'A';
            criptado+=asciinicial;
        }
	}

    return criptado;
}

//ABCDEFGHIJKMNOPQRSTUVWXYZ
//qwertyuiopasdfghjklzxcvbnm






