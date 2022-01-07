#include <bits/stdc++.h>

using namespace std;

string encriptacion(vector<int> v,string texto)
{
    int tamaño=texto.size(),tam=v.size();
    char letra,let;
    int cont=0,sum,n
    map<char,int> abc;
    for(int i=0;i<26;i++)
    {
        abc.insert(make_pair('A'+cont,65+cont));
        cont++;
    }
    cont=0;
    texto="";
    for(int i=0;i<tamaño;i++)
    {
        letra=texto[i];
        sum=v[cont];
        n=letra+sum;
        if((n>90))
        {
            sum=sum-90;
            letra='A'+sum;
        }else
        {
            letra=letra+sum;
        }
        texto=texto+letra;
        cont++;
        if(cont>=tam)
            cont=0;
    }
    return texto;

}

string encriptado(int clave, int N, string texto)
{
    char b;
    string::const_iterator ait(texto.begin()),aend(texto.end());
    for(;ait<aend;ait++)
    {
        b=*ait;
        if(b==' ')
            texto.erase(ait);
    }
    int cl=clave,cont=1;
    cl=cl/10;
    while(cl>=1)
    {
        cont++;
        cl=cl/10;
    }
    vector<int> num(cont);
    for(int i=0;i<cont;i++)
    {
        n=1;
        contador=con;
        while(con--)
        {
            n=n*10;
        }
        con=cont-(i+2);
        num[i]=clave/n;
        restar=num[i];
        while(contador--)
        {
            restar=restar*10;
        }
        clave=clave-restar;
    }
    int tam=num.size()
    if(tam==cont)
    {
        texto=encriptacion(num,texto);
    }else
    {
        if(tam>cont)
        {
            num.erase(num.begin(),(num.begin()+(tam-cont)));
            texto=encriptacion(num,texto);

        }else
        {
            num.insert(num.begin(),(cont-tam),0);
            texto=encriptacion(num,texto);
        }
    }
    return texto;
}
