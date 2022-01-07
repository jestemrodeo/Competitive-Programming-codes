#include <bits/stdc++.h>

using namespace std;

class EllysPronunciation
{
    public:
    int getGood(vector <string> v)
    {
        int good=0;
        for(int i=0; i<v.size(); i++){
            int vow=0; int cons=0;
            for(int j=0; j<v[i].length(); j++){
                if(tolower(v[i][j])=='a' or
                tolower(v[i][j])=='e' or
                tolower(v[i][j])=='i' or
                tolower(v[i][j])=='o' or
                tolower(v[i][j])=='u'){
                    vow++;
                }
                else{
                    cons++;
                }
            }
            if(vow==cons){
                good++;
            }
        }
        return good;
    }
};