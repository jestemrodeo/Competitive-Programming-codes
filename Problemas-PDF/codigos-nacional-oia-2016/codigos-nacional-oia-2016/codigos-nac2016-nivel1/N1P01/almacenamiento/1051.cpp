#include <bits/stdc++.h>
using namespace std;
int main (){
        ifstream ent("almacenamiento.in");
        ofstream sal("almacenamiento.out");
        int c,a,h[20],m=0;
        ent>>c;
        for(int x=1;x<=c;x++){
			ent>>h[x];
			if(h[x]>m){
				m=h[x];
			          }
			          a=h[x]-m;
			          if(a>m){
						  m=a;				             
						     }
						 a=a-m;
						 if(a>m){
							 m=a;
						        }
						 a=a-m;
		  }
						 
						 sal<<a<<endl;
						 
			
		return 0;	
		  }
		
			