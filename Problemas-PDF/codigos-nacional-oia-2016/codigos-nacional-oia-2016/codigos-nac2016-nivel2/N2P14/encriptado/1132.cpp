#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

string encriptado(int clave, int N, string texto)
{
    vector<char>letras (25);
    letras[0]='A';
    letras[1]='B';
    letras[2]='C';
    letras[3]='D';
    letras[4]='E';
    letras[5]='F';
    letras[6]='G';
    letras[7]='H';
    letras[8]='I';
    letras[9]='J';
    letras[10]='K';
    letras[11]= 'L';
    letras[12]='M';
    letras[13]='N';
    letras[14]='O';
    letras[15]='P';
    letras[16]='Q';
    letras[17]='R';
    letras[18]='S';
    letras[19]='T';
    letras[20]='U';
    letras[21]='V';
    letras[22]='W';
    letras[23]='X';
    letras[24]='Y';
    letras[25]='Z';


    for(int i = 0; i<texto.size(); i++)
    {
        if (texto[i]==' ')
        {
            texto.erase(texto.begin()+i);
        }
    }

    vector<char>sub(N);
    int fin = N-1, enc;
    int c1, c2;
    cout<<"c1 y c2: ";
    cin>>c1,c2;
    for(int i = 0; i < texto.size(); i+N-1)
    {
        for (int j = i; j<fin; j++)
        {
            sub.push_back(texto[j]);
            cout<<texto[j]<< " ";
        }

        for (int j=fin; j=fin; j++)
        {
            for(int p = 0; p<letras.size(); p++)
            {
                if(letras[p]==sub[j])
                {
                    ///es mi letra
                    enc = p;
                }
            }

            sub[j]=(letras[enc]+c2);
            sub[j-1]=(letras[enc]+c1);
        }

        int r = 0;
        for( int k = i; k<fin; k++,r++)
        {
            texto[k] = sub[r];
        }
        fin = fin+N-1;
    }

    return(texto);
}



























/**

for(int i=0; i<letras.size(); i++){
texto[i+N-1]
if (i==26)
    i=0;

}





























int c1, c2;
cout<<"c1: ";
cin>>c1;
cout<<endl<<"c2: ";
cin>>c2;

for(int i = 0; i<texto.size(); i++)
{
    if (texto[i]==' ')
    {
        texto.erase(texto.begin()+i);
    }
}



for(int i = 0; i< texto.size(); i++)
{
    for(int j = 1; j <= N; j++)
    {

        texto[j+N-1];///aca apunto al final de mi sub string
    }

}

return texto}*/
