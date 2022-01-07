#include <string>

using namespace std;

string desvela(string captado, string conocido)
{
    int clave=0, a;
    string auxcon;
    for (int i=0;i<=50;i++){
        auxcon=conocido;

        for (int j=0;j<conocido.size()-1;j++){

            auxcon[j]=auxcon[j]-i;
            if(auxcon[j]<'A')
                auxcon[j]=auxcon[j]+25;

        }
        if (a=captado.find(auxcon,0)<captado.size())
            clave=i;
    }
    /*
    for (int i=0;i<50;i++){

        for (int j=0;j<captado.size()-(conocido.size()-1);j++){

            for (int k=0;k<conocido.size()-1;k++){

                if (captado[j+k]==conocido[k])
                    flag=1;
                else{
                    flag=0;
                    break;
                }
            }
            if (flag==1)
                break;
        }
        if (flag==1){
            clave=i;
            break;
        }
    }
*/ int y=0;
    for (int l=0;l<captado.size();l++){
        if(captado[l]==' ')
            continue;
        captado[y]=captado[y]+clave;
        if (captado[y]>'Z')
            captado[y]-=25;
        y++;
    }



    return captado;

}
