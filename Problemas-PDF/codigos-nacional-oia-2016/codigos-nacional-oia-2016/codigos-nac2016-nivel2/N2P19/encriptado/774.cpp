#include <string>
#include <math.h>
#include <iostream>

using namespace std;

string intToString(int x) {
	string result = "";
	int digits = floor(log10(x)) + 1;
	for (int i = 0; i < digits; i++) {
		char newChar = (x / (int) pow(10, i)) % 10 + '0';
		result = newChar + result;
	}
	return result;
}

string encriptado(int clave, int N, string texto) {
	string noSpaces = "";
	for (int i = 0; i < (int) texto.length(); i++) if (texto[i] != ' ') noSpaces += texto[i];
	clave = clave % (int) pow(10, N);
	string x = intToString(clave);
	while ((int) x.length() < N) x = "0" + x;
	while (x.length() < noSpaces.length()) x += x;
	cout << "clave: " << x << endl;
	cout << "palabra: " << noSpaces << endl;
	for (int i = 0; i < (int) noSpaces.length(); i++) {
		cout << "letter: " << noSpaces[i] << endl;
		cout << "shift: " << x[i] << endl;
		noSpaces[i] = (((noSpaces[i] + (x[i] - '0')) - 'A') % ('Z' - 'A' + 1)) + 'A';
	}
	return noSpaces;
}
