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

double dis(double x1, double y1, double x2, double y2){
    return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}
double vx1, vy1, vx2, vy2;
double newDis(double x1, double y1, double x2, double y2, double t){
    double newX1 = x1 + (vx1 * t);
    double newX2 = x2 + (vx2 * t);
    double newY1 = y1 + (vy1 * t);
    double newY2 = y2 + (vy2 * t);

    return dis(newX1, newY1, newX2, newY2);

}
const double EPS = 1e-9;
void solve() {
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cin >> vx1 >> vy1 >> vx2 >> vy2;

    double l = 0, r = 30000.0, ans = dis(x1, y1, x2, y2);
    while(r - l > EPS){
        double m1 = l + (r - l) / 3.0;
        double m2 = r - (r - l) / 3.0;

        double d1 = newDis(x1, y1, x2, y2, m1);
        double d2 = newDis(x1, y1, x2, y2, m2);
        if(d1 > d2){
            ans = min(d2, ans);
            l = m1;
        }else{ // d2 >= d1
            ans = min(d1, ans);
            r = m2;
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