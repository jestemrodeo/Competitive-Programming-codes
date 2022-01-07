#include<string>
#include<string.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<stdlib.h>
using namespace std;

string encriptado(int clave, int N, string texto)
{
    fstream arch("prov.out",ios::out | ios::in);
    arch<<clave;

    char aux[255];

    char buff[255];
    int c = 0;
    strcpy(aux,texto.c_str());

    while(!arch.eof()){
        arch.seekg(c)>>buff[c];c++;
    }
    arch.close();
    vector<char> encript(N,'0');



    for(int i =0 ; i<strlen(buff);i++){
        encript.pop_back();
    }
    for(int i =0 ; i<strlen(buff);i++){
        encript.push_back(buff[i]);
    }



    int cou=0;
    texto.clear();

    for(unsigned int i=0; i<strlen(aux); i++){
        if(aux[i] != ' '){
            int cs = encript[cou] - 48;

            if(aux[i]+cs>90){

               aux[i] = (aux[i]+cs)-26;
            }else{
                  aux[i] = (aux[i]+cs);
            }
            cou++;
            if(cou > encript.size()){ cou = 0; }
            texto.push_back(aux[i]);
        }
    }
    return texto;
}

