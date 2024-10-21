#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}

const ll N = 2e5 + 5;
int a[N];

int main() {
    fast();
    
    int n, k, q;
    cin >> n >> k >> q;
    
    for(int i = 0; i < n; i++){
        int l, r; 
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    for(int i = 0; i < N; i++)
        a[i] += a[i - 1];
    
    for(int i = 0; i < N; i++){
        if(a[i] >= k)
            a[i] = 1;
        else
            a[i] = 0;
    }
    for(int i = 0; i < N; i++)
        a[i] += a[i - 1];
    
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
    return 0;
}
