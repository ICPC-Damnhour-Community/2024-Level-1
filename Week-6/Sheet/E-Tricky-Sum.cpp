#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n, sum, pow2 = 1;
        cin >> n;
        sum = n * (n + 1) / 2;;
        while(pow2 <= n){
            sum -= 2 * pow2;
            pow2 *= 2;
        }
        cout << sum << endl;
    }
    return 0;
}