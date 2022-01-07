#include <string>
#include <iostream>

using namespace std;

int clave[2];

void buscarclave(string captado, string conocido);

string desvela(string captado, string conocido)
{


    for (int i = 0; i < conocido.size(); i++){
        if (conocido[i] == ' '){
            conocido.erase(conocido.begin()+i);
        }
    }



    buscarclave(captado, conocido);

    for (int i = 0; i < captado.size(); i++){
        if (i % 2 != 0){
            captado[i] = captado[i] - clave[1];
            if (captado[i] < 65){
                captado[i] = 91 - (65 - captado[i]);
            }
        }
        else{
            captado[i] = captado[i] - clave[0];
            if (captado[i] < 65){
                captado[i] = 91 - (65 - captado[i]);
            }
        }

    }
    return captado;
}

void buscarclave(string captado, string conocido){
    int a = 0, b = 0;

    if (captado.size() == 1){
        while(a < 26){
            if (captado[0] - a == conocido[0]){
                clave[0] = a;
                return;
            }
            a++;
        }
    }
    else if (captado.size() == 2){
        while (a < 26){
            if (captado[0] - a == conocido[0]){
                clave[0] = a;
                break;
            }
            a++;
        }
        while(b < 26){
            if (captado[1] - b == conocido[1]){
                clave[1] = b;
                break;
            }
            b++;
        }
        return;
    }
    else if (captado.size() == 3){
        while(true){
        for (int i = 0; i < 3; i++){
            while(a < 26){
                if (captado[i] - a == conocido[0]){
                    clave[0] = a;
                    while(b < 26){
                        if (captado[i+1] - b == conocido[1]){
                            clave[1] = b;
                            if (captado[i+2] - clave[0] == conocido[2])
                                return;
                        }
                        b++;
                    }
                    b = 0;
                }
                a++;
            }
            a = 0;
        }
        if (a == 0 and b == 0){
            clave[0] = clave[1] = 0;
            return;
        }

        }
    }

    while(true){
        for (int i = 0; i < 26; i++){
            while(a < 26){
                if (captado[i] - a == conocido[0]){
                    clave[0] = a;
                    while(b < 26){
                        if (captado[i+1] - b == conocido[1]){
                            clave[1] = b;
                            if (captado[i+2] - clave[0] == conocido[2] and captado[i+3] - clave[1] == conocido[3])
                                return;
                        }
                        b++;
                    }
                    b = 0;
                }
                a++;
            }
            a = 0;
        }
        if (a == 0 and b == 0){
            clave[0] = clave[1] = 0;
            return;
        }
    }
}

