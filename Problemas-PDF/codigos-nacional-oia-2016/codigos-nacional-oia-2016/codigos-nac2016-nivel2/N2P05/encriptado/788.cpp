

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string encriptado(int clave, int N, string texto);

int main()
{
    //Muestra
    string encriptado="YO HE LOGRADO ENCENDER UNA CERILLA";
    string texto;
    int n=2;
    int clave=23;
    cout << n << " " << clave << endl;
    cout << encriptado << endl;
    //calculos
    texto="ARJHNRIUCGQHPFGQFHTXPPDEHTLNOC";
    //final
    cout << texto << endl;
    return 0;
}
