#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct punto{
	unsigned int i,j,maxVecino,oldi,oldj;
};

int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido)
{		
    unsigned int M = barrio.size();
    int max=0,steps=0;
    vector<punto> puntos;
    
    for(unsigned int i = 0; i < M; i++){
		for(unsigned int j = 0; j < M; j++){
				max = (barrio[i][j]>max)?barrio[i][j]:max; //consigo pendiente mas alta		
		}
	}
	for(unsigned int i = 0; i < M; i++){
		for(unsigned int j = 0; j < M; j++){
				if(barrio[i][j]==max){// me fijo cuantas altas tengo
					punto temp;
					temp.i = i,temp.j = j,temp.maxVecino = 0,temp.oldi = i,temp.oldj = j;					
					puntos.push_back(temp);
				}		
		}
	}				
    
    int legoodindex = 0;
    for(int p = 0; p < puntos.size(); p++){	
		legoodindex = p;	
		recorrido.clear();//limpiamos por si tenemos ganador en este ciclo
		while(puntos[p].maxVecino!=1){
			int iten,jten;	
			for(int i=-1;i<2;++i){
				if(((puntos[p].i+i)>0)&&((puntos[p].i+i)<barrio.size()))
					if((barrio[puntos[p].i+i][puntos[p].j] > puntos[p].maxVecino) && (barrio[puntos[p].i+i][puntos[p].j] != barrio[puntos[p].i][puntos[p].j]) ){
						puntos[p].maxVecino = barrio[puntos[p].i+i][puntos[p].j];
						iten = puntos[p].i+i;
						if(i<0)
							recorrido += "O";
						if(i>0)
							recorrido += "E";
					}							
			}			
			for(int i=-1;i<2;++i){
				if(((puntos[p].i+i)>0)&&((puntos[p].i+i)<barrio[0].size()))
					if((barrio[puntos[p].i][puntos[p].j+i] > puntos[p].maxVecino) && (barrio[puntos[p].i][puntos[p].j+i] != barrio[puntos[p].i][puntos[p].j]) ){
						puntos[p].maxVecino = barrio[puntos[p].i][puntos[p].j+i];
						jten = puntos[p].j+i;
						if(i<0)
							recorrido += "N";
						if(i>0)
							recorrido += "S";
					}
			}
			if(iten<puntos[p].i){ //si llegamos a subir, no podemos, entonces nos vamos de aca y nos removemos
				break;
			}
			else{
				puntos[p].i = iten, puntos[p].j = jten;
				steps++;
			}
		}
		
	}
           
    pista = vector<vector<int> >(2, vector<int>(2));
    
    pista[0][0] = puntos[legoodindex].oldi;
    pista[0][1] = puntos[legoodindex].oldj;
    
    pista[1][0] = puntos[legoodindex].i;
    pista[1][1] = puntos[legoodindex].j;

        
    return steps;
}
