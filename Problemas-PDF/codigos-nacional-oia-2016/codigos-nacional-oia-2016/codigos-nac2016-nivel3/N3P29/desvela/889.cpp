#include <string>

using namespace std;
char d(char x)
{
x=x-2;
if (x<65)
x=x+26;
else if (x>90)
x=x-26;
return x;
}
char b(char x)
{
x=x-3;
if (x<65)
x=x+26;
else if (x>90)
x=x-26;
return x;
}
string desvela(string captado, string conocido)
{
string aux;
for(int i=0;i<captado.size();i++)
{
if(i%2==0)
captado[i]=d(captado[i]);
else captado[i]=b(captado[i]);

}

    return captado;
}
