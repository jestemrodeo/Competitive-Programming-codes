#include <vector>
#include <iostream>

using namespace std;

int toldos(vector<int> feriantes, vector<int> costos)
{
    long F=feriantes.size();
    F=4;
    long P=costos.size();
    P=8;
    vector<int > feriantes(F);
    vector<int > costos(P);
    cout << "Con " << P << " puestos y " << F << " feriantes cuesta " << toldos(feriantes, costos) << endl;
    return 115;
}

