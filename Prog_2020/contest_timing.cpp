#include <bits/stdc++.h>

using namespace std;

int contest_timing(int D, int H, int M)
{
	if (D==11&&(H<11||M<11)) return -1;
	int ret = 0;
	int res = 660+11;
	ret += (D-11)*1440 - res;
	ret += H*60;
	ret += M;
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int D, H, M;
	cin >> D >> H >> M;
	
	cout << contest_timing(D, H, M) << endl;
	
	return 0;
}
