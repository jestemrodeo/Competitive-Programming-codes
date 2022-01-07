
#include <iostream>

int main(int argc, char **argv)
{
	int M=1,i,C,h,i,ce,cpl,ei,ef;
	FILE *ent,*sal;
	char dent[]="pista.in";
	char dsal[]="pista.out";
	ent=fopen(dent,"rt");
	sal=fopen(dsal,"wt");
	for(i=0;i<M;i++);
	{
		
		if(h<M==0)
		{
			ce[M]=ce+1;
			h[M]=h+1;
		}		
		if(i<M==0)
		{
				cpl[C]=ce+1;
				ei[C]=ei+1;
				ef[C]=ef+1;
		}
	}
		fclose (ent);
		fprintf(sal,"%d	",cpl);
		fprintf(sal,"%d	",ei);
		fprintf(sal,"%d	",ef);
		fclose(sal);
		getchar ();
		return 0;
}	

