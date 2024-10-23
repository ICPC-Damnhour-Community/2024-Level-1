#include <bits/stdc++.h>

using namespace std;

#define clr(v,d) memset(v, d, sizeof(v))

void fast(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int k, n;
vector<int> a, b;

bool check (int mid) {
    int temp = k;
    
    for(int i = 0; i < n; i++) {
        int need = a[i] * mid;
        if (need > b[i]) {
            temp -= (need - b[i]);
        }
        if (temp < 0){
            return 0;
        }
    }
    
    return 1;
}
 
void solve (){
    int m, l = 0, r = 2000, ans = -1;
    while(l <= r){
        m = (l + r) / 2;
        if(check(m)){
            ans = m;
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    cout << ans << endl;
}
int main() {
    fast();
    
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        b.push_back(x);
    }
    
    solve();

    return 0;
}
