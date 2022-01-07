#include <string>

using namespace std;

string desvela(string captado, string conocido)
{	

	int tama;
	tama=captado.size();
	
	int ciclo1=0;
	int ciclo2=0;
	int fc1=0;
	int fc2=0;
	int a=0;
	char es=' ';
	
	for (int i=0;i<=tama+4;i++){
		if(conocido[a]==es){	
			a++;}
			ciclo1=captado[i]-conocido[a];
			
			a++;
		if(conocido[a]==es){	
			a++;}
			ciclo2=captado[i+1]-conocido[a];
			a++;
		if(conocido[a]==es){	
			a++;}
			if(captado[i+2]-conocido[a]==ciclo1){
				a++;
				if(conocido[a]==es){	
					a++;}
					if(captado[i+3]-conocido[a]==ciclo2){
						fc1=ciclo1;
						fc2=ciclo2;
						
		}
	}
	a=0;
	}
	
	if (fc1>=0 && fc2>=0){
		for (int u=0;u<=tama;u+=2){
			
			captado[u]=captado[u]-fc1;
			
			if (captado[u]=='('){
				captado[u]='B';}
			if (captado[u]==')'){
				captado[u]='C';}
			if (captado[u]=='*'){
				captado[u]='D';}
			if (captado[u]=='+'){
				captado[u]='E';}
			if (captado[u]==','){
				captado[u]='F';}
			if (captado[u]=='-'){
				captado[u]='G';}
			if (captado[u]=='.'){
				captado[u]='H';}
			if (captado[u]=='/'){
				captado[u]='I';}
			if (captado[u]=='0'){
				captado[u]='J';}
			if (captado[u]=='1'){
				captado[u]='K';}
			if (captado[u]=='2'){
				captado[u]='L';}
			if (captado[u]=='3'){
				captado[u]='M';}
			if (captado[u]=='4'){
				captado[u]='N';}
			if (captado[u]=='5'){
				captado[u]='O';}
			if (captado[u]=='6'){
				captado[u]='P';}
			if (captado[u]=='7'){
				captado[u]='Q';}
			if (captado[u]=='8'){
				captado[u]='R';}
			if (captado[u]=='9'){
				captado[u]='S';}
			if (captado[u]==':'){
				captado[u]='T';}
			if (captado[u]==';'){
				captado[u]='U';}
			if (captado[u]=='<'){
				captado[u]='V';}
			if (captado[u]=='='){
				captado[u]='W';}
			if (captado[u]=='>'){
				captado[u]='X';}
			if (captado[u]=='?'){
				captado[u]='Y';}
			if (captado[u]=='@'){
				captado[u]='Z';}
				
			captado[u+1]=captado[u+1]-fc2;
			
			if (captado[u+1]=='('){
				captado[u+1]='B';}
			if (captado[u+1]==')'){
				captado[u+1]='C';}
			if (captado[u+1]=='*'){
				captado[u+1]='D';}
			if (captado[u+1]=='+'){
				captado[u+1]='E';}
			if (captado[u+1]==','){
				captado[u+1]='F';}
			if (captado[u+1]=='-'){
				captado[u+1]='G';}
			if (captado[u+1]=='.'){
				captado[u+1]='H';}
			if (captado[u+1]=='/'){
				captado[u+1]='I';}
			if (captado[u+1]=='0'){
				captado[u+1]='J';}
			if (captado[u+1]=='1'){
				captado[u+1]='K';}
			if (captado[u+1]=='2'){
				captado[u+1]='L';}
			if (captado[u+1]=='3'){
				captado[u+1]='M';}
			if (captado[u+1]=='4'){
				captado[u+1]='N';}
			if (captado[u+1]=='5'){
				captado[u+1]='O';}
			if (captado[u+1]=='6'){
				captado[u+1]='P';}
			if (captado[u+1]=='7'){
				captado[u+1]='Q';}
			if (captado[u+1]=='8'){
				captado[u+1]='R';}
			if (captado[u+1]=='9'){
				captado[u+1]='S';}
			if (captado[u+1]==':'){
				captado[u+1]='T';}
			if (captado[u+1]==';'){
				captado[u+1]='U';}
			if (captado[u+1]=='<'){
				captado[u+1]='V';}
			if (captado[u+1]=='='){
				captado[u+1]='W';}
			if (captado[u+1]=='>'){
				captado[u+1]='X';}
			if (captado[u+1]=='?'){
				captado[u+1]='Y';}
			if (captado[u+1]=='@'){
				captado[u+1]='Z';}
		
		}}
	
	
	if (fc1<0 && fc2<0){
		for (int u=0;u<=tama;u+=2){
			
			captado[u]=captado[u]+fc1;
			
			if (captado[u]=='['){
				captado[u]='A';}
			if (captado[u]==']'){
				captado[u]='C';}
			if (captado[u]=='^'){
				captado[u]='D';}
			if (captado[u]=='_'){
				captado[u]='E';}
			if (captado[u]=='`'){
				captado[u]='F';}
			if (captado[u]=='a'){
				captado[u]='G';}
			if (captado[u]=='b'){
				captado[u]='H';}
			if (captado[u]=='c'){
				captado[u]='I';}
			if (captado[u]=='d'){
				captado[u]='J';}
			if (captado[u]=='e'){
				captado[u]='K';}
			if (captado[u]=='f'){
				captado[u]='L';}
			if (captado[u]=='g'){
				captado[u]='M';}
			if (captado[u]=='h'){
				captado[u]='N';}
			if (captado[u]=='i'){
				captado[u]='O';}
			if (captado[u]=='j'){
				captado[u]='P';}
			if (captado[u]=='k'){
				captado[u]='Q';}
			if (captado[u]=='l'){
				captado[u]='R';}
			if (captado[u]=='m'){
				captado[u]='S';}
			if (captado[u]=='n'){
				captado[u]='T';}
			if (captado[u]=='o'){
				captado[u]='U';}
			if (captado[u]=='p'){
				captado[u]='V';}
			if (captado[u]=='q'){
				captado[u]='W';}
			if (captado[u]=='r'){
				captado[u]='X';}
			if (captado[u]=='s'){
				captado[u]='Y';}
			if (captado[u]=='t'){
				captado[u]='Z';}
				
			captado[u+1]=captado[u+1]+fc2;
			
			if (captado[u+1]=='['){
				captado[u+1]='A';}
			if (captado[u+1]==']'){
				captado[u+1]='C';}
			if (captado[u+1]=='^'){
				captado[u+1]='D';}
			if (captado[u+1]=='_'){
				captado[u+1]='E';}
			if (captado[u+1]=='`'){
				captado[u+1]='F';}
			if (captado[u+1]=='a'){
				captado[u+1]='G';}
			if (captado[u+1]=='b'){
				captado[u+1]='H';}
			if (captado[u+1]=='c'){
				captado[u+1]='I';}
			if (captado[u+1]=='d'){
				captado[u+1]='J';}
			if (captado[u+1]=='e'){
				captado[u+1]='K';}
			if (captado[u+1]=='f'){
				captado[u+1]='L';}
			if (captado[u+1]=='g'){
				captado[u+1]='M';}
			if (captado[u+1]=='h'){
				captado[u+1]='N';}
			if (captado[u+1]=='i'){
				captado[u+1]='O';}
			if (captado[u+1]=='j'){
				captado[u+1]='P';}
			if (captado[u+1]=='k'){
				captado[u+1]='Q';}
			if (captado[u+1]=='l'){
				captado[u+1]='R';}
			if (captado[u+1]=='m'){
				captado[u+1]='S';}
			if (captado[u+1]=='n'){
				captado[u+1]='T';}
			if (captado[u+1]=='o'){
				captado[u+1]='U';}
			if (captado[u+1]=='p'){
				captado[u+1]='V';}
			if (captado[u+1]=='q'){
				captado[u+1]='W';}
			if (captado[u+1]=='r'){
				captado[u+1]='X';}
			if (captado[u+1]=='s'){
				captado[u+1]='Y';}
			if (captado[u+1]=='t'){
				captado[u+1]='Z';}
		
		}
	}
	
	if (fc1>=0 && fc2<0){
		for (int u=0;u<=tama;u+=2){
			
			captado[u]=captado[u]-fc1;
			
		if (captado[u]=='('){
				captado[u]='B';}
			if (captado[u]==')'){
				captado[u]='C';}
			if (captado[u]=='*'){
				captado[u]='D';}
			if (captado[u]=='+'){
				captado[u]='E';}
			if (captado[u]==','){
				captado[u]='F';}
			if (captado[u]=='-'){
				captado[u]='G';}
			if (captado[u]=='.'){
				captado[u]='H';}
			if (captado[u]=='/'){
				captado[u]='I';}
			if (captado[u]=='0'){
				captado[u]='J';}
			if (captado[u]=='1'){
				captado[u]='K';}
			if (captado[u]=='2'){
				captado[u]='L';}
			if (captado[u]=='3'){
				captado[u]='M';}
			if (captado[u]=='4'){
				captado[u]='N';}
			if (captado[u]=='5'){
				captado[u]='O';}
			if (captado[u]=='6'){
				captado[u]='P';}
			if (captado[u]=='7'){
				captado[u]='Q';}
			if (captado[u]=='8'){
				captado[u]='R';}
			if (captado[u]=='9'){
				captado[u]='S';}
			if (captado[u]==':'){
				captado[u]='T';}
			if (captado[u]==';'){
				captado[u]='U';}
			if (captado[u]=='<'){
				captado[u]='V';}
			if (captado[u]=='='){
				captado[u]='W';}
			if (captado[u]=='>'){
				captado[u]='X';}
			if (captado[u]=='?'){
				captado[u]='Y';}
			if (captado[u]=='@'){
				captado[u]='Z';}
				
			captado[u+1]=captado[u+1]+fc2;
		
		
		}
	}
	
	if (fc1<0 && fc2>=0){
		for (int u=0;u<=tama;u+=2){
			captado[u]=captado[u]+fc1;
			
			
			
			captado[u+1]=captado[u+1]-fc2;
			
				
		
		}
	}
    return captado;
}
