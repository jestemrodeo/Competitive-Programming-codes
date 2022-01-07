#include <string>

using namespace std;
int l;
char d(char x,int a)
{
    x=x-a;
    if (x<65)
        x=x+26;
    else if (x>90)
        x=x-26;
    return x;
}
char e(char x,int a)
{
    x=x-a;
    if (x<65)
        x=x+26;
    else if (x>90)
        x=x-26;
    return x;
}
bool sliw(string &captado,string &frase)
{
    int ver=0;
    int tam=frase.size();
    for(int i=0; i<captado.size()-tam; i++)
    {
        for(int x=0; x<tam; x++)
        {
            if(captado[i+x]==frase[x])
                ver=ver+0;
            else ver++;
        }
        if (ver==0)
            return true;
            else ver=0;

    }
    return false;
}
string desvela(string captado, string conocido)
{
    int a,b,aux;
    string frase;
    for(int x=0; x<conocido.size(); x++)
    {
        if(conocido[x]>=65 && conocido[x]<=90)
            frase+=conocido[x];
    }
    for(a=0; a<=25; a++)
    {
        if (a==0)
            aux=1;
        else aux=0;
        for(b=aux; b<=25; b++)
        {
            for(int i=0; i<captado.size(); i++)
            {
                if(i%2==0)
                    captado[i]=d(captado[i],a);
                else captado[i]=e(captado[i],b);

            }
            if(sliw(captado,frase)==true)
            return captado;

        }
    }

    // return frase;
}
