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
const double EPS = 1e-9;
void solve() {
   int n; cin >> n;

   double l = 1.0, r = n / 2.0, ans;
   while(r - l > EPS){
       double mid = (l + r) / 2;
       if(mid * mid <= n){
           l = mid;
           ans = mid;
       }else{
           r = mid;
       }
   }
   cout << fixed << setprecision(15) << ans << endl;

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