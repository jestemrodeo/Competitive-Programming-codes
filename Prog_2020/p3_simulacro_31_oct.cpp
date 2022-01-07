#include <bits/stdc++.h>

using namespace std;

struct Vacas {
	int x;
	int id;
};

bool comp(const Vacas &a,const Vacas &b){
	return a.x<b.x;
}

int cow_lineup(vector <int> x, vector <int> id)
{
	int n = (int)x.size();
	map<int,bool> razas;
	vector<Vacas> v(n); 
	for(int i=0; i<n; i++){
		if (razas.find(id[i]) == razas.end() ) {
			razas[id[i]] = false;
		}
		Vacas v_aux;
		v_aux.x = x[i];
		v_aux.id = id[i];
		v[i] = v_aux;
	}
	sort(v.begin(), v.end(), comp);
	int costo = 1000000000;
	int c_razas = 0;
	multiset<int> act;
	int j=0;
	for(int i=0; i<n-razas.size(); i++){
		for(j; j<n; j++){
			if(c_razas==razas.size()) break;
			if(razas[v[j].id]==false){
				razas[v[j].id] = true;
				c_razas++;
			}
			act.insert(v[j].id);
			if(c_razas==razas.size()) break;
		}
		if(j==n) j = n-1;
		costo = min(costo, abs(v[j].x - v[i].x));
		if(act.count(v[i].id)==1){
			c_razas--;
			razas[v[i].id]=false;
		}
		act.erase(act.find(v[i].id));
	}
	return costo;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
	cin >> N;
	
	vector <int> x(N), id(N);
	for(int i=0; i<N; i++)
		cin >> x[i] >> id[i];
	
	cout << cow_lineup(x, id) << endl;
	
	return 0;
}
