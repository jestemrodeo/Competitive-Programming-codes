#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int val;
    int l;
    int r;
} range;

int operator+(range a, range b) {
    return a.val + b.val;
}

const int IDENTITY = 0;
vector<range> ST;

int nextPot(int x) {
    int ans = 1;
    while (ans < x) ans *= 2;
    return ans;
}

void update(int pos, int val) {
    ST[pos].val = val;
    while (pos > 0) {
        pos /= 2;
        ST[pos].val = ST[pos * 2] + ST[pos * 2 + 1];
    }
}

int query(int pos, int l, int r) {
    if (ST[pos].r < l || ST[pos].l > r) return IDENTITY;
    else if (l <= ST[pos].l && r >= ST[pos].r) return ST[pos].val;
    return query(pos * 2, l, r) + query(pos * 2 + 1, l, r);
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    n = nextPot(n);
    arr.resize(n, IDENTITY);
    ST.resize(n * 4);
    for (int i = n; i < n * 2; i++) {
        ST[i] = {arr[i - n], i, i};
    }

    for (int i = n - 1; i >= 1; i--) {
        ST[i] = {
            ST[i * 2].val + ST[i * 2 + 1].val,
            ST[i * 2].l,
            ST[i * 2 + 1].r
        };
    }

    int tipo, a, b;
    for (int i = 0; i < q; i++) {
        cin >> tipo >> a >> b;
        if (tipo == 1) {
            update(a + n - 1, b);
        }
        else {
            cout << query(1, a + n - 1, b + n - 1) << '\n';
        }
    }
}
