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
    ll n, x, sum = 0, i = 0;
    cin >> n;
    ll a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    
    cin >> x;
    
    ll c = x / sum;
    ll res = c * n;
    x -= c * sum;
    
    while(x >= 0){
        x -= a[i];
        i++;
        res++;
    }
    
    cout << res;
    return 0;
}