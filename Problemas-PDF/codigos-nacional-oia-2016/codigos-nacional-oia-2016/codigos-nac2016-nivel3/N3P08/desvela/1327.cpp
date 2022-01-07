#include <string>

using namespace std;
const int MAX = 2000000;

string desvela(string captado, string conocido)
{
	int con1;
	int con2;    
	for (int i = 0; i<MAX; i++)
	{
		  if(captado[i] == conocido[i])
	    {
		    printf ("ciclo de 0 corrimientos\n");
	    }
	    
	    if(captado[i+1] == conocido[i+1])
	    {
		    printf ("ciclo de 0 corrimientos\n");
	    }
	    
	  else if  (captado[i]!= conocido[i])
	    {
		    do
		    {
			    if (con1>=25)
			    {
				    printf ("desborde del rango\n");
			    }
			    else
			    {
				    con1++;
			    }
		    }while ((captado[i] != conocido[i])or(con1<25));
	    }
		  
		  
	  else if  (captado[i+1] != conocido[i+1])
	    {
		    do
		    {
			    if (con2<= 25)
			    {
				    printf ("desborde del rango\n");
			    }
			    else
			    {
				    con2++;
			    }
		    }while ((captado[i+1] != conocido[i+1]) or (con2<25));
	    }
		
	}
    return captado;
}

