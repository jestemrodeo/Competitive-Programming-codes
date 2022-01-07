#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("discurso.in","r",stdin);
	freopen("discurso.out","w",stdout);
	string mensaje;
	bool primer=false;
	while(cin>>mensaje){
		if (primer){
			cout<<' '<<mensaje;
		}
		else
		cout<<mensaje;
		primer=true;
	}
	cout<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
