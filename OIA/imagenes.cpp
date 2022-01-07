#include<iostream>
#include<string>

using namespace std;

int main(){
    freopen("imagenes.in", "r", stdin);
    freopen("imagenes.out", "w",stdout);
    string s;
    cin>>s;
    string c;
    cin>>c;
    char letraActual=s[0];
    int cc=0;
    string sComp="";
    for(int i=0; i<s.length(); i++){
        if(s[i]==letraActual){
            cc++;
        }
        else if(cc>4){
            sComp+="(";
            sComp+=letraActual;
            sComp+=to_string(cc);
            sComp+=")";
            cc=1;
            letraActual=s[i];
        }
        else{
            for(int j=0; j<cc; j++){
                sComp+= letraActual;
            }
            cc=1;
            letraActual=s[i];
        }
    }
    if (cc > 4){
        sComp += "(";
        sComp += letraActual;
        sComp += to_string(cc);
        sComp += ")";
    }
    else{
        for (int j = 0; j < cc; j++){
            sComp += letraActual;
        }
    }
    string sDescomp = "";
    for (int i = 0; i < c.length(); i++){
        if (c[i] == '('){
            char letra = c[i + 1];
            i++;
            i++;
            string t = "";
            while (c[i] != ')'){
                t += c[i];
                i++;
            }
            int repetir = stoi(t);
            for (int j = 0; j < repetir; j++){
                    sDescomp += letra;
                }
            }
        else{
            sDescomp+=c[i];
        }
    }
    cout<<sComp<<endl;
    cout<<sDescomp<<endl;
    fclose(stdin);
    fclose(stdout);
}