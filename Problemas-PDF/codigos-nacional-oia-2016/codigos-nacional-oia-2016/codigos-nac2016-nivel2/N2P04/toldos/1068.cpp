#include <vector>

using namespace std;

int pasillo[10000000];
int toldos(vector<int> feriantes, vector<int> costos)
{
    int F = feriantes.size();
    int P = costos.size();
    int uno=0,dos=0,tres=0,a,b,v,rta,cont;
    for(int i=0;i<1e7;i++){
    pasillo[i]=-1;
    }
    for(int i=0;i<F;i++){
    pasillo[feriantes.back()]=1;
    feriantes.pop_back();
    }
    cont=0;
    v=0;
    for(int i=0;i<1e7;i++){
    if(pasillo[i]==1&&v==0){
    a=i;
    v=1;
    }
    if(pasillo[i]==1&&v==1){
        b=i;
        pasillo[a]=-1;
        pasillo[b]=-1;
        if(a-b==1)
        uno++;
        if(a-b==2)
        dos++;
        if(a-b==3)
        tres++;
        v=0;
    }
    }

    rta=uno*costos[0]+costos[1]*dos+costos[2]*tres;


    return rta;
}
