#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main(){
    ifstream in("desvela.in");

    string a;
    char dev[25] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'O', 'P' ,'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    int dev1[25] = {0};
    in >> a;

    int largo = a.size();


    int b[largo] = {0,0,0,0,0,0};

    for(int i = 0; i < a.size(); i++){

        b[i] = a[i] - 68;
        if(b[i] < 0){

          b[i] = b[i] + 25;
        }

    }

    a = "";

    for(int i = 0; i < largo; i++){
        a = a + dev[b[i]];


    }
    cout << a;








    return 0;

}
