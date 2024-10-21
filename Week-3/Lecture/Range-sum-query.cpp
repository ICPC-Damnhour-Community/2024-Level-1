#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}
const ll N = 2e5 + 5, M = 1e6, MOD = 1e9 + 7, OO = 0x3f3f3f3f;

void solve() {
    int n, q; cin >> n >> q;
    ll a[n + 1];

    for(int i = 1; i <= n; i++){// O(n)
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){ // O(n)
        a[i] += a[i - 1];
    }
    while(q--){ // O(q)
        int l, r; cin >> l >> r;
        cout << a[r] - a[l - 1] << endl; // O(1)
    }
    // // O(n + q)
}
/*
 *
 */
int main(){
    fast();
    solve();
    return 0;
}