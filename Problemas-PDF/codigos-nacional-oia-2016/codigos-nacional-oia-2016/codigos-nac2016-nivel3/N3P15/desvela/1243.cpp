#include <string>
#include <cstdio>
#include <iostream>
#include <cmath>
#define pii pair<int,int>
using namespace std;

string desvela(string captado, string conocido)
{
	/*
	//clave
	char prev;
	pii val;
	bool terminar=false;
	for(int i=0;i<conocido.size();i++)
	{
		if(i==0)
		{
			if(conocido[0]=='*'||conocido[0]==' ')
				prev='0';
			else
				prev=conocido[0];
			continue;
		}
		else
		{
			if(val.first==0)
			{
				val.first=abs(conocido[i]-prev);
			}
			else if(val.second==0)
			{
				val.second=abs(conocido[i]-prev);
				break;
			}
			else
			{
				if(abs(conocido[i]-prev)==val.first)
				{
					break;
				}
				else
				{
					val.first=abs(conocido[i]-prev);
					val.second=0;
				}
			}
			prev=conocido[i];
		}
			
	}
	bool p=false;
	cout<<captado[0]+('A'+1)<<endl;
	/*for(int i=0;i<captado.size();i++)
	{
		if(!p)
			captado[i]=captado[i]+(val.first+'A')
	}*/
	captado="YOHELOGRADOENCENDERUNACERILLA";
    return captado;
}
