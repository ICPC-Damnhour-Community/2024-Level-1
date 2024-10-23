#include <bits/stdc++.h>

using namespace std;

#define clr(v,d) memset(v, d, sizeof(v))

typedef long long ll;

void fast(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

ll k, n;
vector<ll> a, b;

bool check (ll mid) {
    ll temp = k;
    
    for(ll i = 0; i < n; i++) {
        ll need = a[i] * mid;
        if (need > b[i]) {
            temp -= (need - b[i]);
        }
        if (temp < 0){
            return 0;
        }
    }
    
    return 1;
}
 
void solve (){
    ll m, l = 0, r = 2e9, ans = -1;
    while(l <= r){
        m = (l + r) / 2;
        if(check(m)){
            ans = m;
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    cout << ans << endl;
}
int main() {
    fast();
    
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        ll x; cin >> x;
        a.push_back(x);
    }
    
    for(int i = 0; i < n; i++) {
        ll x; cin >> x;
        b.push_back(x);
    }
    
    solve();

    return 0;
}
