#include <vector>
#include <iostream>

using namespace std;

int toldos(vector<int> feriantes, vector<int> costos)
{
    int P,F; cin >> P >> F;
    vector<int > feriantes(F, vector<int>(F));
    vector<int > costos(P, vector<int>(P));
    for (int i=0; i<F; i++)
        cin >> feriantes[i];
    for (int i=0; i<P; i++)
        cin >> costos[i];
    cout << "Con " << P << " puestos y " << F << " feriantes cuesta " << toldos(feriantes, costos) << endl;
    return 115;
}

