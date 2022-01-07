#include<iostream>

using namespace std;

int main(){
    int cant;
    cin>>cant;
    for(int i = 0; i<cant; i++){
        string s;
        cin>>s;
        for(int j = 0; j<s.length()-1; j++){
             if(j==0 || j%2==0){
                 cout<<s[j];
             }
             if(j==(s.length()-2)){
                 cout<<s[j+1];
             }  
        }
        cout<<endl;
    }
}