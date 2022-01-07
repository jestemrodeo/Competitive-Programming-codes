#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

#include "tutubo.cpp"

vector<int> tutubo(vector<int> &siguiente, vector<int> &preguntaX, vector<long long> &preguntaK);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<int> siguiente;
    siguiente.resize(n);
    for (int i0 = 0; i0 < n; i0++) {
        cin >> siguiente[i0];
    }
    vector<int> preguntaX;
    vector<long long> preguntaK;
    preguntaX.resize(q);
    preguntaK.resize(q);
    for (int i = 0; i < q; i++) {
        cin >> preguntaX[i];
        cin >> preguntaK[i];
    }
    vector<int> returnedValue;
    returnedValue = tutubo(siguiente, preguntaX, preguntaK);
    for (int i = 0; i < int(returnedValue.size()); i++) {
        cout << returnedValue[i] << "\n";
    }
    return 0;
}
