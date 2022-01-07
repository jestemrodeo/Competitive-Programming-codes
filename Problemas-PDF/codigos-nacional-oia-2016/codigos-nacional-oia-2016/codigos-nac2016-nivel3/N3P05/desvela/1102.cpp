#include <string>

using namespace std;

string desvela(string captado, string conocido)
{
    char corrimiento1; char corrimiento2;
    int retroceder1=0; int retroceder2=0;
    string mensaje = captado;

    while(conocido.find(" ") != string::npos){
        conocido.replace(conocido.find(" "),1,"");
    }

    for(int i = 0; i<26; i++){ //Cantidad de lugares que se corre1
        for(int j = 0; j<26; j++){ //Cantidad de lugares que se corre2
            for(int m = 0; m<captado.size(); m++){ //Recorre string
                retroceder1=i; retroceder2=j; //corrimiento1= i; corrimiento2= j;
                    if(m%2==0){
                        int aux1 =captado[m]-retroceder1;
                        if(aux1 < 65){
                            aux1 = 90-retroceder1+1;
                        }
                        mensaje[m]=aux1;
                        //cout<< aux1 << mensaje[i]<< endl;
                    }else{
                        int aux2 =captado[m]-retroceder2;
                        if(aux2<65){
                            aux2 = 90-retroceder2+1;
                        }
                        mensaje[m]=aux2;
                        //cout<< aux2 << mensaje[i]<< endl;
                    }
            }
            if(mensaje.find(conocido) != string::npos){
                captado = mensaje;
                break;
            }
            //cout << "Mensaje: " <<i<<","<<j<<"..."<< mensaje<< endl;
        }

    }
    //cout <<"MENSAJE es: " << mensaje <<endl;

    return captado;
}
