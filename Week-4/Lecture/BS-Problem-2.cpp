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

void solve() {
   int n; cin >> n;
   int a[n];
   for(int i = 0; i < n; i++){
       cin >> a[i];
   }

   int x; cin >> x;

   int l = 0, r = n - 1, ans = -1;
   while(l <= r){
       int mid = (l + r) / 2;
       if(a[mid] <= x){
           l = mid + 1;
       }else{
           r = mid - 1;
           ans = mid;
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