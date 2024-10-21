#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int a[N];
int main() {
    
    int q; cin >> q;
    
    char c; int n;
    
    int l = 0, r = 0;
    bool f = 0;
    
    while(q--) {
        cin >> c >> n;
        if (!f) {
            a[n] = l, l--, r++;
            f = 1;
            continue;
        }
        if (c == 'L')
            a[n] = l, l--;
        else if (c == 'R')
            a[n] = r, r++;
        else
            cout << min(abs(a[n] - l), abs(a[n] - r)) - 1 << endl;
    }
    return 0;
}
