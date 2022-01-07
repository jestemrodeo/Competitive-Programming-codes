#include <vector>
using namespace std;

struct Esquina
{
    int x,y;
};

struct Pista
{
    Esquina ini, cur, fin;
};

int largomax;
int largo;
int inicio;
int xinicio;

int largos[2100][2][2];

int curva(vector<vector<int>> barrio, int &K, Pista &pista)
{
    inicio=1000000001;
    int M=barrio.size();
    int y=1;
    int x=0;
    int s=0;//start
    int e=1;//end

    //-------------------------------------------X
    for(int xi=0; xi<M; xi++){
        xinicio=0;
        largomax=0;
        largo=0;
        for(int j=0; j<M; j++){
            if(barrio[xi][j]<inicio){
                largo++;
            }else if(largo>largomax){
                largomax=largo;
                largos[xi][x][s]=j-largomax;
                largos[xi][x][e]=j;
            }
        }
    }

    for(int xi=0; xi<M; xi++){
        xinicio=0;
        largomax=0;
        largo=0;
        for(int j=0; j<M; j++){
            if(barrio[xi][j]>inicio){
                largo++;
            }else if(largo>largomax){
                largomax=largo;
                largos[xi][x][e]=j-largomax;
                largos[xi][x][s]=j;
            }
        }
    }

    //--------------------------------------------Y
    for(int yi=0; yi<M; yi++){
        xinicio=0;
        largomax=0;
        largo=0;
        for(int j=0; j<M; j++){
            if(barrio[j][yi]<inicio){
                largo++;
            }else if(largo>largomax){
                largomax=largo;
                largos[yi][y][s]=j-largomax;
                largos[yi][y][e]=j;
            }
        }
    }

    for(int yi=0; yi<M; yi++){
        xinicio=0;
        largomax=0;
        largo=0;
        for(int j=0; j<M; j++){
            if(barrio[j][yi]<inicio){
                largo++;
            }else if(largo<largomax){
                largomax=largo;
                largos[yi][y][e]=j-largomax;
                largos[yi][y][s]=j;
            }
        }
    }



    int M = barrio.size();
    pista.ini.x = M-1;
    pista.ini.y = M-1;
    pista.cur.x = M-1;
    pista.cur.y = 0;
    pista.fin.x = 0;
    pista.fin.y = 0;
    K = 1000000000;
    return 42;

}

