#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}
const ll N = 2e5 + 5, M = 1e18 + 5, MOD = 1e9 + 7, OO = 0x3f3f3f3f;
ll k, n;
ll a[N];
bool can(ll mid){
    ll cnt = 0; // 7 9 9
    for(int i = n / 2; i < n; i++){
        if(a[i] < mid)
            cnt += (mid - a[i]);
        else break;
    }
    return cnt <= k;
}
void solve() {
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);

    ll l = a[n / 2], r = 2e9, ans = 0;
    while(l <= r){
        ll mid = (l + r) / 2;
        //cout << mid << " ";
        if(can(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ans << endl;

}
/*

 */
int main(){
    fast();
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}