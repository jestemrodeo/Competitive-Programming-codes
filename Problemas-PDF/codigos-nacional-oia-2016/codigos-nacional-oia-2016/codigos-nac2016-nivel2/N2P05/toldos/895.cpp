#include <vector>

using namespace std;

int toldos(vector<int> feriantes, vector<int> costos)
{
    int F = feriantes.size()cin >> F;
    int P = costos.size()cin >> P;
    vector<int > feriantes(F);
    vector<int > costos(P);
    for (int i=0; i<F; i++)
        cin >> feriantes[i];
    for (int i=0; i<P; i++)
        cin >> costos[i];
    cout << "Con " << P << " puestos y " << F << " feriantes cuesta " << toldos(feriantes, costos) << endl;
    return 115;
}
