#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}

const int N = 1e5+5;
ll a[N], pre[N];
int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    pre[0] = a[0];
    for(int i = 1; i < n; i++)
        pre[i] = a[i] + pre[i - 1];

    sort(a, a + n);
    
    for(int i = 1; i < n; i++)
        a[i] += a[i - 1];

    int m; cin >> m;
    while (m--) {
        int t, l, r;
        cin >> t >> l >> r;
        l--,r--;
        if (l == 0) {
            if (t == 1) cout << pre[r] << endl;
            else cout << a[r] << endl;
        }
        else {
            if (t == 1) cout << pre[r] - pre[l - 1] << endl;
            else cout << a[r] - a[l - 1] << endl;
        }
    }
}

