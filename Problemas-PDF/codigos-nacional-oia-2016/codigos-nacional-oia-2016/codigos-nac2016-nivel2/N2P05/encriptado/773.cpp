#include "encriptado.cpp"

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string encriptado(int clave, int N, string texto);

int main()
{
    string linea1String;
    getline(cin,linea1String);
    istringstream linea1(linea1String);
    int N, clave;
    linea1 >> N >> clave;
    string texto;
    getline(cin, texto);
    cout << encriptado(clave, N, texto) << endl;
    return 0;
}
