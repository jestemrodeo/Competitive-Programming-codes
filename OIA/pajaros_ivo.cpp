#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
using namespace std;
ifstream entra;
ofstream sale;
int mini(int c, int d){
	if(c>=d){
		return d;
	}
	else{
		return c;
	}
}
int abs(int a){
	if(a<0){
		return -a;
	}
	else{
		return a;
	}
}
int main (){
	entra.open("pajaros.in");
	sale.open("pajaros.out");
	int n,m,min,r;
	min=1000000;
	entra>>n;
	queue <vector <int> > q;
	vector <int> v;
	vector <int> vec(310);
	vector <int> ve(310);
	vec[1]=2;
	for(int i=0;i<=309;i++){
		vec[i]=100000;
	}
	vec[1]=2;
	for(int i=0;i<=309;i++){
		ve[i]=100000;
	}
	q.push(vec);
	q.push(ve);
	for(int i=0;i<n;i++){
		entra>>m;
		v.push_back(m);
	}
	if (n>300){
	    r=300;
	}
	else{
	    r=n;
	}
	for (int i=1;i<n;i++){
		for(int j=0;j<r+1;j++){
					if(j-1<0){
					q.back()[j]=q.front()[j+1]+abs(j-v[i]);	
					}
					else{
						q.back()[j]=mini(q.front()[j+1],q.front()[j-1]);
						q.back()[j]=q.back()[j]+abs(j-v[i]);
					}
				}
		q.pop();
		q.push(ve);
	}
	for(int i=0;i<=r;i++){
		if(q.front()[i]<=min){
			min=q.front()[i];
		}
	}
	sale<<min;
return 0;
	
}