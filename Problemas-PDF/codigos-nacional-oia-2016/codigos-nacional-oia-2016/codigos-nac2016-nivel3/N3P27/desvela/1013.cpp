#include "desvela.cpp"

#include <iostream>
#include <string>

using namespace std;

string desvela(string captado, string conocido);

int main()
{
    string captado, conocido;
    getline(cin,captado);
    getline(cin, conocido);
    if (conocido[conocido.size()-1] == '*')
        conocido.erase(conocido.size()-1);
    cout << "Con una muestra de largo " << conocido.size() << " el texto claro es:" << endl;
    cout << desvela(captado, conocido) << endl;
    return 0;
}
