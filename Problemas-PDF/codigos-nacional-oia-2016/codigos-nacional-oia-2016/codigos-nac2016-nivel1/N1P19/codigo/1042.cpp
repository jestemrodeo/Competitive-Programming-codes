
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;


int n,l,t,b,r,a,c=1,s,g,d,digitos,num[11];

int main(int argc, char **argv)
{
	freopen("codigo.in","r",stdin);
	freopen("codigo.out","w",stdout);
	
	cin >> n >> l >> t;
	r=t;
	
	char codigo[t];
	while(r > 0){
		cin >> codigo[b];
		b++;
		r--;
	}
	r=t;
	while(r > 0){
		
		if (codigo[a]== ' '){
		t--;
		}
		a++;
		r--;
	}
	s=l;
	while(s  !=0){
	digitos++;
	s=s/10;
	
 }
 a=0;
 r=l;
	while(digitos != 0){
	b= pow(10,digitos-1);
	c= l/b;
	num [a]= c;
	digitos--;
	cout << num[a]<< ' ';
	a++;
	l= l-c*b;
	
	
}
r=t;
t=t/n ;
	while(t> 0){
		t--;
		if(n==1){
			codigo [g]= codigo[g]+num[0];
			g=g+n;
		}
		if (n==2){
			codigo [g]= codigo[g]+num[0];
			codigo [g+1]= codigo[g+1]+num[1];
			g=g+n;
		}
		if (n==3){
			codigo [g]= codigo[g]+num[0];
			codigo [g+1]= codigo[g+1]+num[1];
			codigo [g+2]= codigo[g+2]+num[2];
			g=g+n;
		}
		if (n==4){
			codigo [g]= codigo[g]+num[0];
			codigo [g+1]= codigo[g+1]+num[1];
			codigo [g+2]= codigo[g+2]+num[2];
			codigo [g+3]= codigo[g+3]+num[3];
			
			g=g+n;
		}
		if (n==5){
			codigo [g]= codigo[g]+num[0];
			codigo [g+1]= codigo[g+1]+num[1];
			codigo [g+2]= codigo[g+2]+num[2];
			codigo [g+3]= codigo[g+3]+num[3];
			codigo [g+4]= codigo[g+4]+num[4];
			g=g+n;
		}
		if (n==6){
			codigo [g]= codigo[g]+num[0];
			codigo [g+1]= codigo[g+1]+num[1];
			codigo [g+2]= codigo[g+2]+num[2];
			codigo [g+3]= codigo[g+3]+num[3];
			codigo [g+4]= codigo[g+4]+num[4];
			codigo [g+5]= codigo[g+5]+num[5];
			g=g+n;
		}
		if (n==7){
			codigo [g]= codigo[g]+num[0];
			codigo [g+1]= codigo[g+1]+num[1];
			codigo [g+2]= codigo[g+2]+num[2];
			codigo [g+3]= codigo[g+3]+num[3];
			codigo [g+4]= codigo[g+4]+num[4];
			codigo [g+5]= codigo[g+5]+num[5];
			codigo [g+6]= codigo[g+6]+num[6];
			g=g+n;
		}
		if (n==8){
			codigo [g]= codigo[g]+num[0];
			codigo [g+1]= codigo[g+1]+num[1];
			codigo [g+2]= codigo[g+2]+num[2];
			codigo [g+3]= codigo[g+3]+num[3];
			codigo [g+4]= codigo[g+4]+num[4];
			codigo [g+5]= codigo[g+5]+num[5];
			codigo [g+6]= codigo[g+6]+num[6];
			codigo [g+7]= codigo[g+7]+num[7];
			g=g+n;
		}
		if (n==9){
			codigo [g]= codigo[g]+num[0];
			codigo [g+1]= codigo[g+1]+num[1];
			codigo [g+2]= codigo[g+2]+num[2];
			codigo [g+3]= codigo[g+3]+num[3];
			codigo [g+4]= codigo[g+4]+num[4];
			codigo [g+5]= codigo[g+5]+num[5];
			codigo [g+6]= codigo[g+6]+num[6];
			codigo [g+7]= codigo[g+7]+num[7];
			codigo [g+8]= codigo[g+8]+num[8];
			g=g+n;
		}
	}
		a=0;
		while(r > 0){
			
			
			cout<< codigo[a];
			a++;
			r--;
		}
		
		
	

	return 0;
	
	
}

