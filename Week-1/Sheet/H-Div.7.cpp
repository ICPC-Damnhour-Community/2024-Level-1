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
    int t; 
    cin >> t;
    while(t--){
        int n; cin >> n;
        if(n % 7 == 0){
            cout << n << endl;
            continue;
        }
        n /= 10; // 99
        n *= 10; // 990
        cout << n + (7 - (n % 7)) << endl;
    }
    return 0;
}
