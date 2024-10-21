#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}
const ll N = 1000000 + 5, M = 1e18 + 5, MOD = 1e9 + 7, OO = 0x3f3f3f3f;

int solution(vector<int> &a) {
    int n = a.size();

    int pre[n], suf[n];
    pre[0] = a[0], suf[n - 1] = a[n - 1];
    for(int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + a[i];
    }
    for(int i = n - 2; i >= 0; i--){
        suf[i] = suf[i + 1] + a[i];
    }

    int mnDif = 10005;
    for(int i = 0; i < n - 1; i++){
        mnDif = min(abs(pre[i] - suf[i + 1]), mnDif);
    }
    return mnDif;

}