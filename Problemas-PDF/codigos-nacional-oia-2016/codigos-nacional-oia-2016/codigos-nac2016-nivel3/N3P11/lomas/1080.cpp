#include <vector>

using namespace std;

void lomas(vector<vector<int> > t, int k, vector<int> &fil,vector<int> &col)
{
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
    
    int max=-1; //altura mas grande
    /* numeros de altura maxima */
    int may[M*N][1]; //los numeros mas grandes
    int a=0;//
    int b=0;//
    
    /* Encuentro el numero mas grande */
    
    for(int i=k;i<=M-k;i++){
		for(int j=k;j<=N-k;j++){
			if(t[i][j]>max){
				max=t[i][j];
				a=i;
				b=j;
			}
		}
	}
	
	int cant=1; //cantidad de lugares a probar
	may[cant][0]=a;
	may[cant][1]=b;
	
	/* guardo los mas grandes */ 
	for(int i=k;i<=M-k;i++){
		for(int j=k;j<=M-k;j++){
			if(t[i][j]==max){
				may[cant][0]=i;
				may[cant][0]=j;
				cant++;
			}
		}
	}
	
	int maxi[cant][cant+1];
	int help=0;
	
	for(int i=0;i<=cant;i++){
		for(int j=i+1;j<=cant;j++){
				if(may[i][0]-may[j][0]<=2*k+1 && may[i][1]-may[j][1]>=2*k+1){
					maxi[i][help]=j;
					help++;
				}
				
				if(may[i][1]-may[j][1]<=2*k+1 && may[i][0]-may[j][0]>=2*k+1){
					maxi[i][help]=j;
					help++;
				}
				
				if(may[i][1]-may[j][1]>=2*k+1 && may[i][0]-may[j][0]>=2*k+1){
					maxi[i][help]=j;
					help++;
				}
				
			
			
			}
		maxi[i][0]=help;
		
		help=0;
	}
	
	int grand=0;
	int help2=0;
	for(int i=0;i<=cant;i++){
		if(may[i][0]>grand){
			grand=may[i][0];
			help2=i;
		}
	}
	
	for(int i=1;i<=help2;i++){
		may[maxi[grand][i]][0]++;
		may[maxi[grand][i]][1]++;
		col.push_back(may[maxi[grand][i]][0]);
		fil.push_back(may[maxi[grand][i]][1]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	/* Creo los cuadrados
	int cuadrados[cant][3];
	for(int i=0;i<=cant;i++){
		cuadrados[i][0]=may[i][0]-k;
		cuadrados[i][1]=may[i][1]-k;
		cuadrados[i][2]=may[i][0]+k;
		cuadrados[i][3]=may[i][1]+k;
	}
	
	*/
	
}
