#include "karting.cpp"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int karting(vector<vector<int> > barrio, vector<vector<int> > &pista, string &recorrido);

int main()
{
    int M; cin >> M;
    vector<vector<int> > barrio(M, vector<int>(M));
    for (int i=0;i<M;i++)
    for (int j=0;j<M;j++)
        cin >> barrio[j][i];
    vector<vector<int> > pista;
    string recorrido;
    cout << "El largo de la pista es " << karting(barrio, pista, recorrido) << endl;
    cout << "Inicio: (" << pista[0][0] << "," << pista[0][1] << ")  Fin: (" << pista[1][0] << "," << pista[1][1] << ")" << endl;
    cout << recorrido << endl;
    return 0;
}

//NO ENTIENDOOO PORQUE LA EMPRESA DE VIAJE "URQUIZA" NO NOS QUISO LEVANTAR, POR ESO LLEGAMOS TARDE A CÓRDOBA Y NO PUDIMOS ASISTIR AL ENTRENAMIENTO-----ALEXIS NIVEL 3 LA RIOJA.
