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
        long long hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;

        bool f = 0;
        for(int i = 0; i <= k; i++){
            long long hcNew = hc, dcNew = dc;
            hcNew += i * a;
            dcNew += (k - i) * w;
            // double / int = double
            // 4.6 -> 5, 4.3 -> 5 //ceil(4.3)
            if(ceil((hcNew * 1.0) / dm) >= ceil((hm * 1.0) / dcNew)){
                cout << "YES\n";
                f = 1;
                break;
            }
        }
        
        if(!f) cout << "NO\n";
    }
    return 0;
}
