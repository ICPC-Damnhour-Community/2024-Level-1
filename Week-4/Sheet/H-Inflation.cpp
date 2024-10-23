#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 100 + 5;
int n, k;
ll a[N];

bool check(ll m){
    ll sum = a[0] + m;
    for(int i = 1; i < n; i++){
        if(a[i] * 100LL > sum * k) 
            return false;
        sum += a[i];
    }
    return true;
}
void solve() {
    cin >> n >> k;
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    ll l = 0, r = 1e15, ans = -1;
    while(l <= r){
        ll mid = (l + r) / 2;
        if(check(mid)){
            ans = mid;
            r = mid - 1;
        } else l = mid + 1;
    }
    cout << ans << endl;
}

int main(){
    
    int t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
