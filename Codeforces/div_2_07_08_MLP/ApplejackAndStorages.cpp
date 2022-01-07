#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    set<pair<int,int>> tablas;
    for(int i=0; i<n; i++) {
        int tab; cin>>tab;
        auto it = tablas.lower_bound({tab,0});
        if(it != tablas.end()) {
            pair<int,int> aux = *it;
            tablas.erase(it);
            if(aux.first == tab) {
                aux.second++;
            }
            tablas.insert(aux);
        } else {
            tablas.insert({tab,0});
        }
    }
    int c;
    cin>>c;
    for(int i=0; i<c; i++) {
        char op;
        int num;
        cin>>op>>num;
        if(op == '+') {
            auto it = tablas.lower_bound({num,0});
            if(it != tablas.end()) {
                pair<int,int> aux = *it;
                tablas.erase(it);
                if(aux.first == num) {
                    aux.second++;
                }
                tablas.insert(aux);
            } else {
                tablas.insert({num,0});
            }
        } else {
            auto it = tablas.lower_bound({num,0});
            tablas.erase(it);
        }
        set<int> cantTablas;
        for(auto tab : tablas) {
            cantTablas.insert(tab.second);
        }
        bool no = false;
        auto it = cantTablas.lower_bound(4);
        if(it != cantTablas.end()) {
            int aux = *it;
            aux -= 4;
            cantTablas.erase(it);
            cantTablas.insert(aux);
            auto it2 = cantTablas.lower_bound(2);
            if(it2 != cantTablas.end()) {
                int aux = *it;
                aux -= 2;
                cantTablas.erase(it2);
                cantTablas.insert(aux);
                auto it3 = cantTablas.lower_bound(2);
                if(it3 != cantTablas.end()) {
                    cout<<"YES\n";
                } else {
                    no=true;
                }
            } else {
                no=true;
            }
        } else {
            no=true;
        }
        if(no) {
            cout<<"NO\n";
        }
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	for(int i=0; i<t; i++){
		int n; cin>>n;
		int medio = n/2;
		cout<<medio+1<<"\n";
	}
}









