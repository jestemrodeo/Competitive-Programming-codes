#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define loop(x,n) for(int x=0;x<n;x++)
#define pb push_back
#define ii pair<int,int>
#define vii vector<vi>

char tochar(int a)
{
    return (char)a+'A';
}
int toint(char a)
{
    return (int)a-'A';
}

char turn(char a,int k)
{
    int tmp=toint(a);
    return tochar((a+k)%26);
}

string desvela(string captado, string conocido)
{
    string ans;
    string tmp;
    loop(x,conocido.size())
    {
        if(conocido[x]!=' ')tmp+=conocido[x];
    }
    conocido=tmp;
    loop(x,26)
    {
        loop(y,26)
        {
            int aux=1;
            string desifrar;
            loop(i,captado.size())
            {
                if(captado[i]==' ')continue;
                int k;
                if(aux)k=x;
                else k=y;
                aux^=1;
                desifrar+=turn(captado[i],k);
            }
            bool good=0;
            loop(i,desifrar.size()-conocido.size())
            {
                bool good1=1;
                loop(j,conocido.size())
                {
                    if(conocido[j]!=desifrar[j+i])
                    {
                        good1=0;
                        break;
                    }
                }
                if(good1)
                {
                    good=1;
                    break;
                }
            }
            if(good)
            {
                ans=desifrar;
                break;
            }
//            if(x==2&&y==3)cout<<desifrar<<endl;
        }
    }

    return ans;
}
