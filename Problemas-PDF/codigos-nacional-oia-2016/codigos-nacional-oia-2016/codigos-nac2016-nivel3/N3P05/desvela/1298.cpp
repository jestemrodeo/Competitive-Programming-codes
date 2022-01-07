#include <string>

using namespace std;

string desvela(string captado, string conocido)
{
    int aux1, aux2;//int retroceder1=0; int retroceder2=0;
    string mensaje = captado;

    while(conocido.find(" ") != string::npos){
        conocido.replace(conocido.find(" "),1,"");
    }

    for(int i = 0; i<26; i++){ //Cantidad de lugares que se corre1
        for(int j = 0; j<26; j++){ //Cantidad de lugares que se corre2
            for(int m = 0; m<captado.size(); m++){ //Reccorre captado
                    if(m%2==0){
                         aux1=captado[m]-i;
                        if(aux1 < 65){
                            aux1 = 90-i+1;
                        }
                        mensaje[m]=aux1;
                    }else{
                        aux2=captado[m]-j;
                        if(aux2<65){
                            aux2 = 90-j+1;
                        }
                        mensaje[m]=aux2;
                    }
            }
            if(mensaje.find(conocido) != string::npos){
                captado = mensaje;
                break;
            }
        }

    }

    return captado;
}
