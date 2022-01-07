#include <bits/stdc++.h>

using namespace std;

class BagPacking
{
    public:
    int minPay(vector <int> v)
    {
        int res=0;
        sort(v.rbegin(),v.rend());
        for(int i=0; i<v.size()-1; i++){
            if(v[i]>v[i+1]){
                res++;
            }
        }
        return v.size()-res;
    }
};