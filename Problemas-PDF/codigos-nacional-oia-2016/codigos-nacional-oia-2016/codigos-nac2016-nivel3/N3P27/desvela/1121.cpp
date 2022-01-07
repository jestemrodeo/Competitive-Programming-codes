#include <iostream>
#include <string>

using namespace std;

string desvela(string captado, string conocido){
    char dev[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P' ,'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    string dev1;
    int largo = captado.size();
	int num;
	bool flag = false;

    for(int i = 0; i < captado.size(); i++){

		if(flag){
			num = captado[i] - 68;
			flag = false;
		}
		else if(!flag){
			num = captado[i] - 67;
			flag = true;
		}

        if(num >= 0){
            dev1 += dev[num];
        }
        else if(num == -2){
            dev1 += dev[26 + num];
        }
        else if(num == -3){
            dev1 += dev[26-num];
        }
        else if(num == -1){
            dev1 += dev[26 + num];
        }
    }

    conocido = dev1;

    cout << conocido;
    return conocido;
}
