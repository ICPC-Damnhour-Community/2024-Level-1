#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}

const int N = 5e3 + 5;
pair<int, int> a[N];

int main() {
    fast();
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    
    sort(a, a + n);
    
    int ans = -1;
    
    for(int i = 0; i < n; i++){
        if(ans <= a[i].second) 
            ans = a[i].second;
        else 
            ans = a[i].first;
    }
    
    cout << ans;
}
