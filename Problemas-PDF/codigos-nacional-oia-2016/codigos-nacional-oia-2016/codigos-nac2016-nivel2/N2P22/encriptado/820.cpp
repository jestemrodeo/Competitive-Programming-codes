#include <string>

using namespace std;

string encriptado(int clave, int N, string texto)
{

    int numero;
    for (int i ; i<texto.size();i++)
        {
        numero =texto[i];
        numero = numero - 65;

        if (numero%2==0) numero = numero + 3;
        {
         if (numero<25) numero=numero-25;
        }

        if (numero%2==1) numero= numero+2;
        {
            if (numero<25) numero=numero-25;
        }
        texto[i]= numero+'A';
        }
    return texto;
}
