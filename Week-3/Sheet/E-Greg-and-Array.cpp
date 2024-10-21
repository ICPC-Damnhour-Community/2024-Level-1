#include<bits/stdc++.h>
using namespace std;

const long long N = 1e5 + 5;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    long long a[N] = {0};

    for(int i = 1; i <= n; i++)
      cin >> a[i];

    long long b[N] = {0};

    long long op[m + 1][4];
    for(int i = 1; i <= m; i++){
        cin >> op[i][1] >> op[i][2] >> op[i][3];
    }

    long long c[N] = {0};
    while(k--){
        int x, y;
        cin >> x >> y;
        c[x] += 1;
        c[y + 1] -= 1;
    }

    for(int i = 1; i <= m; i++){
        c[i] += c[i - 1];
    }
    for(int i = 1; i <= m; i++){
      op[i][3] *= c[i];
    }
    for(int i = 1; i <= m; i++){
        b[op[i][1]] += op[i][3];
        b[op[i][2] + 1] -= op[i][3];
    }
    for(int i = 1; i <= n; i++)
        b[i] += b[i - 1];

    for(int i = 1; i <= n; i++){
        cout<<a[i]+b[i]<<" ";
    }
    
    return 0;
}
