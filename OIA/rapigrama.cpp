#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    freopen("rapigrama.in", "r", stdin);
    freopen("rapigrama.out", "w", stdout);
    int n, cP;
    cin >> n >> cP;
    vector<string> sopaNormal(n);
    vector<string> sopaDoblada(n);
    vector<string> pal(cP);
    for (int i = 0; i < n; i++)
    {
        cin >> sopaNormal[i];
    }
    for (int i = 0; i < n; i++)
    {
        sopaDoblada[i] = "";
        for (int j = 0; j < n; j++)
        {
            sopaDoblada[i] += sopaNormal[j][i];
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
    for (int i = 0; i < cP; i++)
    {
        cin >> pal[i];
    }
    vector<pair<bool, char>> encontradas(cP, {false, ' '});

    for (int i = 0; i < pal.size(); i++)
    {
        for (auto sN : sopaNormal)
        {
            auto foundEste = sN.find(pal[i]);
            reverse(sN.begin(), sN.end());
            auto foundOeste = sN.find(pal[i]);
            reverse(sN.begin(), sN.end());
            if (foundEste != string::npos)
            {
                if (!encontradas[i].first)
                {
                    encontradas[i] = {true, 'E'};
                }
            }
            else if (foundOeste != string::npos)
            {
                if (!encontradas[i].first)
                {
                    encontradas[i] = {true, 'O'};
                }
            }
        }
        if (!encontradas[i].first)
        {
            for (auto sD : sopaDoblada)
            {
                auto foundSur = sD.find(pal[i]);
                reverse(sD.begin(), sD.end());
                auto foundNorte = sD.find(pal[i]);
                reverse(sD.begin(), sD.end());
                if (foundSur != string::npos)
                {
                    if (!encontradas[i].first)
                    {
                        encontradas[i] = {true, 'S'};
                    }
                }
                else if (foundNorte != string::npos)
                {
                    if (!encontradas[i].first)
                    {
                        encontradas[i] = {true, 'N'};
                    }
                }
            }
        }
    }
    for (int i = 0; i < encontradas.size(); i++)
    {
        if (encontradas[i].first)
        {
            cout << i + 1 << " " << encontradas[i].second;
            cout << endl;
        }
    }
    fclose(stdin);
    fclose(stdout);
}