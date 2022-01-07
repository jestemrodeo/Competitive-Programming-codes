#include <iostream>
#include <string>

using namespace std;

string desvela(string captado, string conocido) {
    string key;
    for (int i=0;i<conocido.size();++i)
        if (conocido[i] != ' ')
            key.push_back(conocido[i]);

    int C[2];

    int i;
    for (i=0;i<captado.size()-key.size();++i) {
        C[0] = captado[i] - key[0];
        C[1] = captado[i+1] - key[1];

        bool match = true;
        for (int j=0;j<key.size();++j) {
            if (captado[i+j] - key[j] != C[j&1]) {
                match = false;
                break;
            }
        }

        if (match) break;
    }

    C[0] = (C[0]+26)%26;
    C[1] = (C[1]+26)%26;

    for (int i=0;i<captado.size();++i)
        captado[i] = 'A'+(captado[i] - 'A' + 26 - C[i&1])%26;

    return captado;
}
