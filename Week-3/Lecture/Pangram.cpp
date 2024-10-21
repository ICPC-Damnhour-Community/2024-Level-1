#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}
const ll N = 2e5 + 5, M = 1e6, MOD = 1e9 + 7, OO = 0x3f3f3f3f;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt[26] = {0};
    for(char i : s){
        i = tolower(i);
        cnt[i - 'a']++; // 122 - 97 = 25
    }

    for(int i = 0; i < 26; i++){
        if(!cnt[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";


}
/*
 *
 */
int main(){
    fast();
    solve();
    return 0;
}