#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <math.h>
#include <cstring>
#include <queue>
using namespace std;

queue<int> checkPos = queue<int>();

//int ultimoPos=0;
int pos=0;

string conocido = "";

string captado = "";

int difCon[1100];

int difCap[2200000];

int largoCon;

int largoCap;

void llegue(){
    cout<<"llegue "<<endl;
}

void llegue(int i){
    cout<<"llegue "<<i<<endl;
}

void init(string cap, string con){
    for(int x=0;x<con.length();x++){
        if(con[x]!=' ' && con[x]!='*'){
            conocido+=con[x];
        }
    }
    captado=cap;
    largoCon = conocido.length();
    largoCap = cap.length();
    //cout<<conocido<<endl;

    for(int i=2;i<largoCon;i++){
        difCon[i] = conocido[i] - conocido[i-2];
        if(difCon[i]<0){
            difCon[i]+=26;
        }
        //cout<<difCon[i]<<" ";
    }
    //cout<<endl;

    for(int i=2;i<largoCap;i++){
        difCap[i] = cap[i] - cap[i-2];
        if(difCap[i]<0){
            difCap[i]+=26;
        }
        //cout<<difCap[i]<<" ";
    }
    //cout<<endl;
}

void corrimiento(int diferencias[2]){
    //cout<<diferencias[0]<<" "<<diferencias[1]<<endl;
    for(int i=0;i<largoCap;i++){
        captado[i]-=diferencias[i%2];
        if(captado[i]<'A'){
        captado[i]+=26;
        }
    }
}

bool check(){
    while(!checkPos.empty()){
        pos = checkPos.front();

        checkPos.pop();

        int i=2;
        /*if(difCap[i+pos]!=difCon[i]){
            break;
        }*/ // Si no no estubiese en el queue
        for(i=3;i<largoCon;i++){

            if(difCap[i+pos]==difCon[2]){
                checkPos.push(i+pos-2);
            }

            if(difCap[i+pos]!=difCon[i]){
                break;
            }
        }

        if(i==largoCon){
            int dif[2] = {captado[pos]-conocido[0],captado[pos+1]-conocido[1]};
            if(pos%2==1){
                int t = dif[0];
                dif[0]=dif[1];
                dif[1]=t;
            }
            corrimiento(dif);
            //return true;
        }
    }
    return false;
}

string desvela(string cap, string con)
{
    init(cap, con);
    for(pos=0;pos<largoCap-largoCon+1;pos++){
        if(difCap[pos+2]==difCon[2]){
            checkPos.push(pos);
        }
    }
    check();

    return captado;
}
