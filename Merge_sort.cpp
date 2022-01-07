#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<int(n);i++)
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)

using namespace std;

vector<int> merge(vector<int> izq, vector<int> der){
	vector<int> res;
	while(!izq.empty() and !der.empty()){
		if(izq[0]<=der[0]){
			res.push_back(izq[0]);
			izq.erase(izq.begin());
		}
		else{
			res.push_back(der[0]);
			der.erase(der.begin());
		}
	}
	if(!izq.empty()){
		while(!izq.empty()){
			res.push_back(*izq.begin());
			izq.erase(izq.begin());
		}
	}
	if(!der.empty()){
		while(!der.empty()){
			res.push_back(*der.begin());
			der.erase(der.begin());
		}
	}
	return res;
}


vector<int> mergesort(vector<int> v){
	vector<int> izq, der, res;
	if(v.size()<=1){
		return v;
	}
	else{
		int mitad=v.size()/2;
		forn(i,mitad){
			izq.push_back(v[i]);
		}
		forsn(i,mitad,v.size()){
			der.push_back(v[i]);
		}
		izq=mergesort(izq);
		der=mergesort(der);
	}
	res=merge(izq,der);
	return res;
}


int main() {
	vector<int> a={6 ,5, 7, 1, 3, 2, 4, 8};
	a=mergesort(a);
	cout<<"ABERRRR"<<endl;
	forn(i,a.size()){
		cout<<a[i]<<" "<<endl;
	}
	return 0;
}

