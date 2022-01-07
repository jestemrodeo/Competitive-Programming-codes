#include <string>
#include <iostream>
#include <sstream>


using namespace std;

string encriptado(int clave, int N, string texto)
{
    string encriptado(clave, N, texto);
    encriptado="YO HE LOGRADO ENCENDER UNA CERILLA";
    cout << "2 23" << endl;
    cout << encriptado << endl;
    texto="ARJHNRIUCGQHPFGQFHTXPPDEHTLNOC";
    for (int i=1; i=29; i++) {
        if ((encriptado[i] / 2)==0)  {
            encriptado[i]=encriptado[i]+3;
        }else{
            encriptado[i]=encriptado[i]+2;
        }
    }
    return texto;
}
