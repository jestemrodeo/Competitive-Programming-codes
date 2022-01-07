#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#define INF 1000000000

using namespace std;
// funciona hasta 100.000.000
// funciona hasta 2e20 y con 2*maxn en vez de 4*maxn
int const MAX_N = 100000000;
int st[MAX_N*4];
int leftmost[MAX_N*4], rightmost[MAX_N*4];


void update(int pos, int val){
	//Cambia el num y actualiza sus padres dividiendo por dos
	st[pos] = val;
	while(pos/=2){
		st[pos] = min(st[pos*2],st[(pos*2)+1]);
	}
	
}

int query(int act, int l, int r){
	//busca alguna de las 3 situaciones:
		// esta completamente contenido
		// esta completamente excluido
		// se superpone
	
	if(leftmost[act]>r || rightmost[act]<l){
		return INF;
	}
	else if(leftmost[act]>=l && rightmost[act]<=r){
		return st[act];
	}
	return min(query(act*2, l,r),query((act*2)+1, l,r));
}

void mostrarHojasST(int n){
	for(int i=n; i<2*n; i++){
		cout<<st[i]<<" ";
	}
	cout<<"\n";
}
	
void inicializarST(int n, vector<int> const &v){
	//CONSTRUIR EL ST
	// agregar y completar las hojas
	//		empezas desde n
	for(int i=0; i<n; i++){
		st[n+i] = v[i];
	}
	//declarar los left y right de las hojas
	for(int i=n; i<2*n; i++){
		leftmost[i] = rightmost[i] = i;
	}
	//precalculo inicial del ST
	for(int i=n-1; i>=1; i--){
		//cualquier operacion, en este caso es sacar el minimo en un rango
		st[i] = min(st[i*2], st[(i*2)+1]);
		leftmost[i] = leftmost[i*2];
		rightmost[i] = rightmost[(i*2)+1];
		
	}
}

int siguientePotenciaDe2(int const n){
	int p = 1;
	while (p<n){
		p *= 2;
	}
	return p;
}
	
int main() {
	freopen("input.in", "r", stdin);
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	n = siguientePotenciaDe2(n);
	v.resize(n,INF);
	inicializarST(n, v);
	
	//recibir querys y updates
	// 1 -> update
	// 2 -> query [l,r]
	int t; cin>>t;
	while(t--){
		int q; cin>>q;
		if(q==1){
			int pos, val; cin>>pos>>val;
			pos = (pos - 1) + n;
			update(pos,val);
			mostrarHojasST(n);
		}
		else if (q==2){
			int l, r; cin>>l>>r;
			int res = query(1, (l+n)-1,(r+n)-1);
			cout<<"El minimo entre el rango ["<<l<<","<<r<<"] es: "<<res<<"\n";
		}
	}
	fclose(stdin);
}




















