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
    int t; cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        sort(a, a + n);
        
        if(a[0] + a[1] <= d || a[n-1] <= d)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
