#include <iostream>

int main(int argc, char **argv)
{
	const int tl=34;
	char letr[tl]; 
	int N,cl,T,i;
    FILE *entrada, *salida;
	char dent[]="codigo.in";
	char dsal[]="codigo.out";
	
	entrada = fopen(dent,"rt");
	salida = fopen(dsal,"wt");
	
	fscanf(entrada,"%d %d \n%d \n%c ",&N,&cl,&T,&letr[tl]);
	
	printf("%d %d \n%d \n%c",N,cl,T,letr[tl]);
 
    
    for(i=0;i<tl;i++)
    {
        printf("%c",letr[i]);
		   
	}
           
       
	return 0;
}
