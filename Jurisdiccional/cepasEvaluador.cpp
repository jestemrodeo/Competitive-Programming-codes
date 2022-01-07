#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

#include "cepas.cpp"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    for (int i0 = 0; i0 < q; i0++) {
        int qType;
        cin >> qType;
        if (qType == 1) {
            inicializar();
        } else if (qType == 2) {
            int madre;
            cin >> madre;
            mutacion(madre);
        } else if (qType == 3) {
            cout << madres() << "\n";
        } else if (qType == 4) {
            cout << maxgen() << "\n";
        } else if (qType == 5) {
            int auxSize;
            cin >> auxSize;
            vector<int> cepas;
            cepas.resize(auxSize);
            for (int i1 = 0; i1 < auxSize; i1++) {
                cin >> cepas[i1];
            }
            cout << originaria(cepas) << "\n";
        }
    }
    return 0;
}
