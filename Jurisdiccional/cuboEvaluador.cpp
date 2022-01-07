#include <iostream>
#include <string>
#include <vector>

using namespace std;

int cubo(vector<vector<vector<int>>> &v);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<vector<int>>> v;
    v.resize(n);
    for (int i0 = 0; i0 < n; i0++) {
        v[i0].resize(n);
        for (int i1 = 0; i1 < n; i1++) {
            v[i0][i1].resize(n);
            for (int i2 = 0; i2 < n; i2++) {
                cin >> v[i0][i1][i2];
            }
        }
    }
    int returnedValue;
    returnedValue = cubo(v);
    cout << returnedValue << "\n";
    return 0;
}
