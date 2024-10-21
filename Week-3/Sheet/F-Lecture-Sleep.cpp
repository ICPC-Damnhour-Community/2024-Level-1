#include<bits/stdc++.h>
using namespace std;

const long long N = 1e5 + 5;

int pre[N];

int main(){

    int n, k, s = 0;
    cin >> n >> k;
    
    int a[n], t[n];
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < n; i++)
        cin >> t[i];
    
    for(int i = 0; i < n; i++){
        if(i) pre[i] += pre[i - 1];
        if(!t[i]) pre[i] += a[i];
        else s += a[i];
    }
    
    int mx = 0;
    for(int i = 0; i < n; i++){
        mx = max(mx, pre[i] - (i >= k ? pre[i - k] : 0));
    }
    
    cout << s + mx;
    
    return 0;
}
