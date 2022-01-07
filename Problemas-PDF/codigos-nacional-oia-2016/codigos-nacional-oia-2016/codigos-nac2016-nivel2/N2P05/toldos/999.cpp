#include <vector>

using namespace std;

int toldos(vector<int> feriantes, vector<int> costos)
{
    long F=feriantes::size(),cin>>F;
    long P=costos::size(),cin>>P;
    vector<int> feriantes{F}::resize();
    vector<int> costos{P}::resize();
    for (int i=0; i<F; i++)
        cin >> feriantes[i].resize(F);
    for (int i=0; i<P; i++)
        cin >> costos[i].resize(P);
    cout << "Con " << P << " puestos y " << F << " feriantes cuesta " << toldos(feriantes, costos) << endl;
    return 115;
}

