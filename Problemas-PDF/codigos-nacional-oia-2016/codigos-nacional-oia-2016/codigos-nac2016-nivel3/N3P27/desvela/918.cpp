#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main(){
    ifstream in("desvela.in");

    string a, dev1;
    char dev[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P' ,'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


    in >> a;

    int largo = a.size();


    int b[largo] = {0,0,0,0,0,0};

    for(int i = 0; i < a.size(); i++){

        b[i] = a[i] - 68;

        if(b[i] > 0){
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

    cout << dev1;








    return 0;

}
