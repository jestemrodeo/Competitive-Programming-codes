#include <vector>
#include <iostream>

using namespace std;



/*void antenas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col, int &x, int &y)
{
	
	
	for (int z=x; z<=x+(2*k)+1; z++)
			{
				for (int q=y; q<=y+(2*k)+1; q++)
				{
					if (valor<t[z][q])
					{valor=t[z][q];
					filas=z;
					columnas=q;
					}
					
				}
			}
			
			if ((filas==((x+(2*k)+1) div 2)+1) and (columnas==((y+(2*k)+1) / 2)+1))
			{
				fil.push_back(filas);
				col.push_back(columnas);
				}
			
}			
*/


void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
	int valor, filas=0;
	int b=0;
	valor=-1; 
	
    int M = t.size();
    int N = t[0].size();
    
    fil.resize(3);
    fil[0] = 0;
    fil[1] = 1;
    fil[2] = 2;
    
    col.resize(3);
    col[0] = 0;
    col[1] = 2;
    col[2] = 1;
    
    
    
    
    for (int x=0; x<M; x++)
    {
		for (int y=0; y<N; y++)
		{
			//antenas(t, k, fil, col, x, y);
			for (int z=x; z<=x+(2*k)+1; z++)
			{
				for (int q=y; q<=y+(2*k)+1; q++)
				{
					if (valor<t[z][q])
					{valor=t[z][q];
					filas=z; b = q;
					}
					
				}
			}
			
			if ((filas==((x+(2*k)+1) / 2)+1) and (b==((y+(2*k)+1) / 2)+1))
				{fil.push_back(filas); 
				 col.push_back(b);}
        }
        }


}
