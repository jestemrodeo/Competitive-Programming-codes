#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //freopen("sopa.in", "r", stdin);
    int n,m,cP;
    cin>>n>>m>>cP;
    vector<string> sopaNormal(n);
    vector<string> sopaDoblada(m);
    vector<string> pal(cP);
    for(int i=0; i<n; i++){
        cin>>sopaNormal[i];
    }
    for(int i=0; i<m; i++){
        sopaDoblada[i]="";
        for(int j=0; j<n; j++){
            sopaDoblada[i]+=sopaNormal[j][i];
        }
    }
    /*
    for(auto p : sopaNormal){
        cout<<p<<endl;
    }
    cout<<"----------------"<<endl;
    for(auto p : sopaDoblada){
        cout<<p<<endl;
    }
    */
    for(int i=0; i<cP; i++){
        cin>>pal[i];
    }
    vector<bool> encontradas(cP,false);

    for(int i=0; i<pal.size(); i++){
        for(auto sN : sopaNormal){
            auto foundIzq = sN.find(pal[i]);
            reverse(sN.begin(), sN.end());
            auto foundDer = sN.find(pal[i]);
            reverse(sN.begin(), sN.end());
            if(foundIzq!=string::npos or foundDer!=string::npos){
                if(!encontradas[i]){
                    encontradas[i]=true;
                }
            }
        }
        if(!encontradas[i]){
            for(auto sD : sopaDoblada){
                auto foundIzq = sD.find(pal[i]);
                reverse(sD.begin(), sD.end());
                auto foundDer = sD.find(pal[i]);
                reverse(sD.begin(), sD.end());
                if(foundIzq!=string::npos or foundDer!=string::npos){
                    if(!encontradas[i]){
                        encontradas[i]=true;
                    }
                }
            }
        }
    }
    for(auto e : encontradas){
        if(e){
            cout<<"SI";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    //fclose(stdin);
}