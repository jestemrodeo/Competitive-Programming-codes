#include <vector>
#include <iostream>

using namespace std;

int toldos(vector<int> feriantes, vector<int> costos)
{
    long F=feriantes.size();
    cin >> F;
    long P=costos.size();
    cin >> P;
    vector<int> feriantes(F),{F};
    vector<int> costos(P),{P};
    for(int i=0; i<F; i++){
        feriantes[i],resize(F);
    }
    for (int i=0; i<P; i++) {
        costos[i],resize(P);
    }
    cout << "Con " << P << " puestos y " << F << " feriantes cuesta " << toldos(feriantes, costos) << endl;
    return 115;
}

