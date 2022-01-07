

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string encriptado(int clave, int N, string texto);

int main()
{
    string encriptado="YO HE LOGRADO ENCENDER UNA CERILLA";
    string texto="ARJHNRIUCGQHPFGQFHTXPPDEHTLNOC";
    long Clave=2;
    long N=23;
    cout << Clave << " " << N << endl;
    cout <<  encriptado << endl;
    cout << texto << endl;
    return 0;
}
