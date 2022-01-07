#include <string>

using namespace std;

string desvela(string captado, string conocido)
{
    string clave = "CD";
    char corrimiento1= clave[0]; char corrimiento2= clave[1];
    int retroceder1=corrimiento1-65; int retroceder2=corrimiento2-65;
    string mensaje = captado;

    for(int i=0; i<captado.size(); i++){
        if(i%2==0){
            int aux1 =captado[i]-retroceder1;
            if(aux1 < 65){
                aux1 = 90-retroceder1+1;
            }
            captado[i]=aux1;
            //cout<< aux1 << mensaje[i]<< endl;
        }else{
            int aux2 =captado[i]-retroceder2;
            if(aux2<65){
                aux2 = 90-retroceder2+1;
            }
            captado[i]=aux2;
            //cout<< aux2 << mensaje[i]<< endl;
        }
    }
    //cout <<"MENSAJE es: " << mensaje <<endl;

    return captado;
}

