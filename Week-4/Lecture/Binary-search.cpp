#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}
const ll N = 1e5 + 5, M = 1e18 + 5, MOD = 1e9 + 7, OO = 0x3f3f3f3f;

void solve() {
    int n, q; cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    while(q--){ // 2 4 7 7 9
        int x; cin >> x;
        int l = 0, r = n - 1, ans = -1;
        while(l <= r){ // l = 1, r = 2
            ll mid = (l + r) / 2; // mid = 1
            if(a[mid] == x){
                ans = mid;
                r = mid - 1;
            }else if(a[mid] < x){
                l = mid + 1;
            }else{ // a[mid] >= x
                r = mid - 1; // r = 2
            }
        }
        cout << ans << endl;
    }
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