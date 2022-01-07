#include <stdio.h>
 
 int main()
   { 
	 FILE*entrada;
	 FILE*salida;
	 
	 int l,i,j;
	 int domina;
     int esquinas[100000],altura[100000];
     
     fopen ("pista.in","r");
     fopen ("pista.out","w");
     
     for(i=0;i<l;i++)
     { 
		 fscanf(entrada,"%d",&esquinas[i]);
		 fscanf(entrada,"%d",&altura[i]);
    }
    fclose(entrada);
    for(i=0;i<l;i++)
     {
		 domina=0;
		 for(j=0;i<l;i++)
		{
			 
			 if(i!=j);
			 if(esquinas[i]>=esquinas[j]); 
			 if(altura[i]>=altura[j]);
			 domina++;
			 
		 }
		  fprintf(salida,"%d\n",domina);
		  fclose(salida);
		  return 0;
  } 
