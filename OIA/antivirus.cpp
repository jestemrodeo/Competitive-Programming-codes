#include<iostream>

using namespace std;

int main(){
    freopen("antivirus.in", "r",stdin);
    freopen("antivirus.out","w",stdout);
    int n;
    char letra;
    char virus;
    cin>>n>>letra>>virus;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]==virus && s[i-1]==letra && s[i+1]==letra){
            s.erase(s.begin() + i);
        }
    }
    cout<<s.length()<<endl<<s<<endl;
    fclose(stdin);
    fclose(stdout);
}