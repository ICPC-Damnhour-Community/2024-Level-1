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
        double d; 
        cin >> d;
        if(d >= 1 && d <= 3)
            cout << 'N' << endl;
        else{
            double a, b;
            a = (d + sqrt(d * d - 4.0 * d)) / 2.0;
            b = (d - sqrt(d * d - 4.0 * d)) / 2.0;
            
            cout << fixed << setprecision(9) << 'Y' << ' ' << a << ' ' << b << endl;
        }
    }
    return 0;
}