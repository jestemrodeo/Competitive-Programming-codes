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
		hola[N-i]=claveFinal%10;//póne en el array de la clave el ultimo digito de la separacion que se habia echo antes.
		claveFinal/=10;//divvide por 10 para sacar el digito que ya habiamos ingresado.
	}

	//criptar la frase:
	int largo= texto.length();//saca el largo del teexto para poder hacer el for con la duracion correcta.
	for(int i=0; i<largo; i++){//recorre toda el string 'texto'
        if(texto[i]!=' '){//pregunta si la posicion en la que estas parado es un espacio (porque a los espacios hay que ignorarlos aparentemente).
            asciinicial=(texto[i]-'A'+hola[i%N])%26+'A';//cambia el valor de la letra.
            criptado+=asciinicial;//lo agrega al nuevo string que sera futuramente la rta a devolver.
        }
	}

    return criptado;//devuelve la rta.
}

//ABCDEFGHIJKMNOPQRSTUVWXYZ
//qwertyuiopasdfghjklzxcvbnm






