#include <iostream>

int main(int argc, char **argv)
{
	int m;
    FILE *entrada, *salida;
    ;   
    char dent[]="almacenamiento.in";
    char dsal[]="almacenamiento.out";
    
    entrada = fopen(dent,"rt");
    salida = fopen(dsal,"wt");
    
    fscanf (entrada,"%d",&m);
    m=(m*3)/10;
     

    fclose(entrada);
    fprintf(salida,"%d",m);
	fclose(salida);
	return 0;
}
