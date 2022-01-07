#include <iostream>
#include <string>
#include <vector>

using namespace std;

int barbijos(int W,int H, vector<int> &w, vector<int> &h);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int W;
    cin >> W;
    int H;
    cin >> H;
    int t;
    cin >> t;
    vector<int> w;
    vector<int> h;
    w.resize(t);
    h.resize(t);
    for (int i = 0; i < t; i++) {
        cin >> w[i];
        cin >> h[i];
    }
    int returnedValue;
    returnedValue = barbijos(W,H,w,h);
    cout << returnedValue << "\n";
    return 0;
}
