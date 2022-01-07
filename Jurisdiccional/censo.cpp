#include <string>
#include <vector>

using namespace std;

int decada(int fecha) {
    string f = to_string(fecha);
	int ret;
	if(f[2]=='0'){
		ret = (int)f[3]-'0';
	}
	else {
		string aux; 
		aux += f[2];
		aux += f[3];
		ret = stoi(aux);
	}
	return ret;
}

bool esmayor(int edad) {
    return (edad>=18); 
}

string nombrecompleto(string nombre, string apellido) {
    return nombre + " " + apellido; 
}

int cantidadmayores(vector<int> &edades) {
    int ret = 0;
	for(auto e : edades){
		if (e >= 18){
			ret++;
		}
	}
	return ret;
}










