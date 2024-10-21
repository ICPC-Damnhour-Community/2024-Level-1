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
    int n, m; cin >> n >> m;
    int pre[m + 5];
    clr(pre, 0); // not vis
    while(n--){ // 10^5
        int l, r; cin >> l >> r;
        pre[l] += 1;
        pre[r + 1] -= 1;
    }
    for(int i = 1; i <= m; i++){
        pre[i] += pre[i - 1];
    }
    vector<int> res;
    for(int i = 1; i <= m; i++){
        if(!pre[i])
            res.push_back(i);
    }
    cout << res.size() << endl;
    for(int p : res){
        cout << p << " ";
    }
    // O(n + m)
}
/*
 *
 */
int main(){
    fast();
    solve();
    return 0;
}