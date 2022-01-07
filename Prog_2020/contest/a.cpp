#include<bits/stdc++.h>

using namespace std;

int main(){

    map<string,int> equipos;

    int n; 
    cin>> n;

    for(int i=0; i<n; i++){
        string t; cin>> t;
        equipos[t]=0;
    }
    for(int i=0; i<((n*(n-1))/2); i++){
        string s;
        getline(cin,s);
        string t1,t2,nn1,nn2;
        int n1, n2;
        int j=0;
            while(s[j]!='-'){
                t1+=s[j];
                j++;
            }
            while(s[j]!=' '){
                t2+=s[j];
                j++;
            }
            while(s[j]!=':'){
                nn1+=s[j];
                j++;
            }
            while(s[j]<s.length()){
                nn2+=s[j];
                j++;
            }
            n1 = stoi(nn1);
            n2 = stoi(nn2);
            /*
        string t1="",t2="";
        int n1, n2; 
        char x='';
        
        x='';
        while(x!=' '){
            char tt2;
            cin>>tt2;
            t2+=tt2;
        }
        x='';
        string nn1="";
        string nn2="";
        while(x!='\n' or x!=' '){
            char g1;
            cin>>g1;
            nn1+=g1;
        }
        n1=stoi(nn1);
        x='';
        while(x!='\n' or x!=' '){
            char g2;
            cin>>g2;
            nn2+=g2;
        }
        n1=stoi(nn2);
        */
            if (n1 > n2)
            {
                equipos[t1] += 3;
        }
        else if(n2>n1){
            equipos[t2]+=3;
        }
        else{
            equipos[t1]++;
            equipos[t2]++;
        }
    }
    cout<<"bien"<<endl;
}