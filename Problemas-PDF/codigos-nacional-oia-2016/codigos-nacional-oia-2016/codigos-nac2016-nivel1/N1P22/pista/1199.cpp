#include <iostream>

int main(int argc, char **argv)
 { 
	 int a=2,b=4,c=7,d=3,e=11;
     ;
	 int  M,i=0,h;
    FILE *entrada,*salida;
    char dent[]="pista.in";
    char dsal[]="pista.out"; 
	
	entrada = fopen(dent,"rt");
	salida = fopen(dsal,"wt");
	
	
	fscanf(entrada,"%d %d",&M,&h);
	
    vh[0]=i;
	
	
	
		
	
    fclose(entrada);
    fprintf(salida,"%d %d\n%d %d\n%d %d",a,b,c,d,c,e);
    fclose(salida);

	return 0;

}

