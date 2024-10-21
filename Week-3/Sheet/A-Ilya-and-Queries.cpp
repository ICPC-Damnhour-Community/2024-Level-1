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
    
    string s; cin >> s;
    
    s = 'i' + s;
    int pre[s.size() + 1];
    pre[0] = 0;
    for(int i = 1; i <= s.size(); i++){
        pre[i] = pre[i-1] + (s[i] == s[i-1]);
    }
    
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        cout << pre[r] - pre[l] << endl;
    }
    
    return 0;
}
