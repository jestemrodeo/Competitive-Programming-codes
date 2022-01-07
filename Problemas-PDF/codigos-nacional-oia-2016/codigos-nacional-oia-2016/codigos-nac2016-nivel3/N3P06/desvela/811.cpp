#include <string>
#include <algorithm>
#include <iostream>

std::string desvela(std::string captado, std::string conocido)
{
	//std::string temp = captado;
	
	for(unsigned int i; i<captado.size(); i++){	
		if((i&1) == 0)
			captado[i] = captado[i]+1;
		if((captado[i]-3) < 65){
			captado[i] = (captado[i]+26)-3;
		}
		else{
			captado[i] = captado[i] - 3;
		}
		
	}
    return captado;
}
