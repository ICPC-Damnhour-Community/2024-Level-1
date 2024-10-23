#include <bits/stdc++.h>

using namespace std;

long long n, k;

bool can( long long mid, vector<long long> num){
    
    long long co = num[0];
    long long c = 1;
    for(int i = 1; i < n; i++){
        if(num[i] - co >= mid){
            c++;
            co = num[i];
        }
    }
    if(c >= k)
        return true;
    
    return false;
}

int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        cin >> n >> k;
        vector<long long> num(n);
        
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        
        sort(num.begin(), num.end());
        
        long long l = 1, r = num[n-1] - num[0], ans = -1;
        
        while(l <= r){
            long long mid = l + (r - l) / 2;
            if(can(mid, num)){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}