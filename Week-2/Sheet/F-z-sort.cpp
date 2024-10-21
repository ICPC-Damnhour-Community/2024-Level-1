#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}

const int N = 1e3 + 5;

int a[N], ans[N];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    int j = 0, k = n - 1;
    
    //even i
    for(int i = 0; i < n; i++){
        if(!(i & 1)){
            ans[i] = a[j];
            j++;
        }
    }

    //odd i
    for(int i = 0; i < n; i++){
        if(i & 1){
            ans[i] = a[k];
            k--;
        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << ' ';
    }
    
    return 0;
}
