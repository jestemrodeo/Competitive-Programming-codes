#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using namespace std;

int main(){
	int n; cin>>n;
    for(int i = 0; i<n; i++){
        string s; cin>>s;
        for(int j = 0; j<s.length(); j++){
            s[j] = tolower(s[j]);
        }
        if(s.back()==s.front()){
            cout<<s<<endl;
        }
    }
}

