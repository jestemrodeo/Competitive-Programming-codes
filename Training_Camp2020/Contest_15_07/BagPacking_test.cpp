#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minPay(vector <int> v)
    {
        int res=0;
        sort(v.rbegin(),v.rend());
        for(int i=0; i<v.size()-1; i++){
            if(v[i]>v[i+1]){
                res++;
            }
        }
        return res;
    }
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<int> v = {2,1,3};
	cout<<minPay<<endl;
}