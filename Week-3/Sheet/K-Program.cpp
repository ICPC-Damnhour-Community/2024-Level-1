#include <bits/stdc++.h>

using namespace std;

#define clr(v,d) memset(v, d, sizeof(v))

void fast(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

const int N = 2e5 + 5;
int pre[N], premx[N], premn[N], sufmn[N], sufmx[N];

void solve(){
    clr(premn, 0), clr(premx, 0), clr(pre, 0), clr(sufmn, 0), clr(sufmx, 0);
    
    int n, m, x;
    cin >> n >> m;
    string s;
    cin >> s;
    for(int i = n; i >= 1; i--) {
        x = s[i - 1] == '+' ? 1 : -1;
        sufmn[i] = min(0, sufmn[i + 1] + x);
        sufmx[i] = max(0, sufmx[i + 1] + x);
    }
    x = 0;
    for(int i = 1; i <= n; i++) {
        x += s[i - 1] == '+' ? 1 : -1;
        premn[i] = min(x, premn[i - 1]);
        premx[i] = max(x, premx[i - 1]);
        pre[i] = x;
    }
    while (m--) {
        int l, r;
        cin >> l >> r;
        l--, r++;
        cout << (max(premx[l], pre[l] + sufmx[r]) - min(premn[l], pre[l] + sufmn[r])) + 1 << endl;
    }
}
int main() {
    fast();
    
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
