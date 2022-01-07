#include <iostream>

int main(int argc, char **argv)
{
	 const int max=14;      ;
	 int  M,i,vh[max],h;
    FILE *entrada,*salida;
    char dent[]="pista.in";
    char dsal[]="pista.out"; 
	
	entrada = fopen(dent,"rt");
	salida = fopen(dsal,"wt");
	
	
	fscanf(entrada,"%d %d",&M,&h);
	printf("%d \n%d",M,h);
    vh[0]=h;
	/*for(i=0;i<=feof(salida);i++)
	{
		printf(" %d",vh[i]);
		printf("cuanto vale i: %d",i);
	}*/
	
	
	
	
	
	
	
	for(i=0;i<M;i++)
	{ 
		
		printf(" %d",vh[i]);
        printf("cuanto vale i: %d",i);
    }	

	return 0;

}

