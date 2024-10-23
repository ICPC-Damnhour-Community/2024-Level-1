#include <bits/stdc++.h>

using namespace std;

#define clr(v,d) memset(v, d, sizeof(v))

typedef long long ll;

void fast(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

const ll N = 5e5 + 7, M = 105, mod = 1e9 + 7;

int a[N];
int n, k;

bool can(int mid){
    int st = a[0], c = k - 1;
    
    for(int i = 0; i < n; i++) {
        int len = a[i] - st + 1;
        if(len > mid){
            st = a[i];
            c--;
        }
        if(c < 0) return false;
    }
    
    return true;
}

void solve() {
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int l = 0, r = a[n - 1], minLength = -1;
    
    while (l <= r) {
        int mid = (l + r) / 2;
        if (can(mid)) {
            r = mid - 1;
            minLength = mid;
        } else l = mid + 1;
    }
    
    cout << minLength << endl;
}

int main() {
    fast();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}