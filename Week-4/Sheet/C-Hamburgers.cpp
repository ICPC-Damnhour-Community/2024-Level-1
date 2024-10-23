#include <bits/stdc++.h>

using namespace std;

#define clr(v,d) memset(v, d, sizeof(v))

typedef long long ll;

void fast(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

string st;
ll b, s, c, pb, ps, pc, hb, hs, hc;
ll have;

bool check(ll need) {
    ll r = have;
    if (need * hb > b) {
        if (r < (need * hb - b) * pb)
            return 0;
        r -= (need * hb - b) * pb;
    }
    if (need * hs > s) {
        if (r < (need * hs - s) * ps)
            return 0;
        r -= (need * hs - s) * ps;
    }
    if (need * hc > c) {
        if (r < (need * hc - c) * pc)
            return 0;
        r -= (need * hc - c) * pc;
    }
    
    return 1;
}
void solve (){
    cin >> st;
    
    for (auto it :st){
        if (it == 'B') hb++;
        else if (it == 'S') hs++;
        else hc++;
    }
    
    cin >> b >> s >> c;
    cin >> pb >> ps >> pc;
    cin >> have;
    
    ll l = 0, r = 1e14, mid, ans = 0;
    while(l <= r) {
        mid = (l + r) / 2;
        if (check(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    
    cout << ans << endl;
}

int main() {
    fast();
    
    solve();

    return 0;
}
