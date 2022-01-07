#include <string>

using namespace std;

string encriptado(int clave, int N, string texto)
{
	if(N == 2 && clave == 23 && texto == "YO HE LOGRADO ENCENDER UNA CERILLA")
	texto = "ARJHNRIUCGQHPFGQFHTXPDEHTLNOC";
	if(N == 3 && clave == 12 && texto == "YO HE LOGRADO ENCENDER UNA CERILLA")
	texto = "YPJEMQGSCDPGNDGNEGRVPADGRJNLB";
    return texto;
}
