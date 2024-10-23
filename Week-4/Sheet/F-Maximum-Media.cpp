#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 2e5 + 5;
ll a[N];
ll n, k;

bool can (ll mid){
    ll kk = 0;
    for(ll i = (n/2); i < n; i++){
        if(a[i] < mid)
            kk += mid - a[i];
        else break;
    }
    return kk <= k;
}

void solve() {
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    ll l = a[(n / 2)], r = 2e9 + 5, mxMedian = -1;
    
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (can(mid)) {
            mxMedian = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    
    cout << mxMedian << endl;
}
int main(){
    
    solve();
    
    return 0;
}
