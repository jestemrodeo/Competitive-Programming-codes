#include <iostream>

int main(int argc, char **argv)
{
	int C,M,i,h;
	FILE *ent, *sal;
	char dent[]="pista.in";
	char dsal[]="pista.out";
	ent= fopen(dent,"rt");
	sal= fopen(dsal,"wt");
	
	
	fscanf(dent,"%d",&C);
	while(M>=2 && M<=10000);
		printf("\n Indica la cantidad de esquinas: %d",M);
	for(i=0;i<10000;i++)
	{
		M=i;
		if(h>=1 && h<=100000);
		   printf("\n Altura de cada fila: %d",h);
	   }
        
	    
	
	
	
	
	 
	 
	 
	 
	 
	 
 
	fclose(ent);
	fprintf(dent,"%d",h);
	fprintf(dsal,"%d",C);
	fclose(sal);
	     
    
    
	return 0;
}


