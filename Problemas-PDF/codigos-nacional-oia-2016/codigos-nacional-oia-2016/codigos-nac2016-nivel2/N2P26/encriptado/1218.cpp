#include<string>
#include<string.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<stdlib.h>
#include<limits.h>
using namespace std;

string encriptado(int clave, int N, string texto)
{
    fstream arch("prov.out",ios::out | ios::in);
    arch<<clave;

    char aux[1000000000];

    char buff[100000000];
    int c = 0;
    strcpy(aux,texto.c_str());

    for(int i = 0; i < N ; i++){
        arch.seekg(c)>>buff[c];c++;
    }
    arch.close();
    vector<char> encript(N,'0');


    bool f = true;
    for(int i =0 ; i<strlen(buff);i++){
        if(f){
            encript[((int)encript.size()-1)-i]=buff[i]+1;
            f = false;
        }else{
            encript[((int)encript.size()-1)-i]=buff[i]-1;
            f = true;
        }


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
            if(cou > encript.size()-1){ cou = 0; }
            texto.push_back(aux[i]);
        }
    }
    return texto;
}

