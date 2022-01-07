#include <vector>
#include <iostream>

using namespace std;

int valor=-1, filas=0;
	int b=0;
	
void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
	
	
    int M = t.size();
    int N = t[0].size();
    
    //fil.resize(3);
    /*fil[0] = 0;
    fil[1] = 1;
    fil[2] = 2;
    */
    //col.resize(3);
  /*  col[0] = 0;
    col[1] = 2; 
    col[2] = 1;
    */
int l, q1;
    for (int x=0; x<M; x++)
    {
		for (int y=0; y<N; y++)
		{
			
			if (((x+(2*k))<M) and ((y+(2*k))<N))
		{	
			for (int z=x; z<(x+(2*k)+1); z++)
			{
				for (int q=y; q<(y+(2*k)+1); q++)
				{
					if (valor<t[z][q])
					{valor=t[z][q];
					filas=z; b = q;
					cout<<"rrrrr";
					}
					q1=q;
				}l=z;
			}
			
			if ((filas==((x+x+(2*k)+1) / 2)) and (b==((y+y+(2*k)+1) / 2))and (t[x][y]<t[x][y+1]) and (t[l][y]<t[l][y+1]) and (t[x][q1]<t[x][q1+1]) and (t[l][q1]<t[l][q1-1]))
				{
					filas++;
					b++;
					fil.push_back(filas); 
				    col.push_back(b);
				 cout<<"qqqq"<<filas<<"pppp"<<b<<endl;}
			
			
			
			}valor=-1;
			
        }
        }


}
