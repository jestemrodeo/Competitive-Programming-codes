#include <string>

using namespace std;

string desvela(string captado, string conocido)
{
     char dev[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P' ,'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    string dev1;
    int largo = captado.size();
    int b[largo] = {0,0,0,0,0,0};

    for(int i = 0; i < captado.size(); i++){

        b[i] = captado[i] - 68;


        if(b[i] >= 0){
            dev1 += dev[b[i]];
        }
        else if(b[i] == -3){
            dev1 += "Y";
        }
        else if(b[i] == -2){
            dev1 += "X";
        }
        else if(b[i] == -1){
            dev1 += "X";
        }
    }

    conocido = dev1;
    return conocido;
}
