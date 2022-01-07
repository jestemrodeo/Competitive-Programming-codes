#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    freopen("mensajes.in","r",stdin);
    freopen("mensajes.out","w",stdout);
    int n; cin>>n;
    string s="";
    for(int i=0; i<n; i++){
        char t;
        cin>>t;
        s+=t;
    }
    string pal; cin>>pal;
    auto found = s.find(pal);
    if(found!=string::npos){
        cout<<"SI"<<endl<<"I"<<endl;
    }
    else{
        reverse(s.begin(),s.end());
        auto found = s.find(pal);
        if(found!=string::npos){
            cout<<"SI"<<endl<<"D"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fclose(stdin);
    fclose(stdout);
}