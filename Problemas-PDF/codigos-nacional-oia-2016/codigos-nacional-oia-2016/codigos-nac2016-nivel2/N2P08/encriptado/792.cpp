#include <string>
#include <math.h>

using namespace std;
	
int actualChar = 0, extraActualChar = 0;
int step, change;
string newTexto = "";

int numLength(int num) {
	int length = 1;
	while (num / 10 >= 1) {
		num = num / 10;
		length++;
	}
	return length;
}

int numInPos(int num, int pos) {
	int steps = 1;
	while (steps < pos) {
		num = num / 10;
		steps++;
	}
	int newNum = num - num / 10 * 10;
	return newNum;
}

string encriptado(int clave, int N, string texto)
{
	int pow10N = (int) pow(10, N);
	
	if (clave > pow10N) {
		clave = clave - clave / pow10N * pow10N;
	}
	
	step = N;
	
	while((int) texto.length() > actualChar + extraActualChar) {
		if (texto[actualChar + extraActualChar] != ' ') {
			if (step > numLength(clave)) {
				change = 0;
			} else {
				change = numInPos(clave, step);
			}
			
			char aux = texto[actualChar + extraActualChar] + (char) change;
			
			if (aux > 'Z') {
				aux -= 26;
			}
			
			newTexto += aux;
			
			if (step == 1) {
				step = N;
			} else {
				step--;
			}
			
			actualChar++;
		} else {
			extraActualChar++;
		}
	}
	
	texto = newTexto;
	
    return texto;
}
