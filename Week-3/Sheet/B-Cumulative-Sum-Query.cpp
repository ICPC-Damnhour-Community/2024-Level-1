#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}

int main() {
    fast();
    
    int n; cin >> n;
    int a[n+1];
    
    a[0]=0;
    
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    
    for(int i = 1; i <= n; i++)
        a[i] += a[i-1];
    
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        l++, r++;
        cout << a[r] - a[l - 1] << endl;
    }
    
    return 0;
}
