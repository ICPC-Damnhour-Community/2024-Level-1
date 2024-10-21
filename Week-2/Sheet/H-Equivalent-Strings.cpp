#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}

bool isEquiv(string a, string b) {
    if (a == b)
        return 1;
    else if(a.size() % 2 || b.size() % 2)
        return 0;
    
    string a1, b1, a2, b2;
    
    a1 = a.substr(0, a.size() / 2);
    b1 = b.substr(0, b.size() / 2);
    a2 = a.substr(a.size() / 2);
    b2 = b.substr(b.size() / 2);
    
    return ((isEquiv(a1, b1) && isEquiv(a2, b2))
    || (isEquiv(a2, b1) && isEquiv(a1, b2)));
    
}
int main(){
    fast();
    
    string a, b;
    cin >> a >> b;
    
    cout << (isEquiv(a, b) ? "YES" : "NO");
    
    return 0;
}
