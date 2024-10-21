#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}

int sum(int i, vector<int>&v){
    //base case
    if(i == v.size()) 
        return 0;
    
    return v[i] + sum(i+1,v);
}

int main(){
    int t, i = 1;
    cin >> t;
    while(t--){
        cout << "Case " << i++ << ": ";
        
        int n;
        vector<int> a;
        
        cin >> n;
        
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        
        cout << sum(0, a) << endl;
    }
    
    return 0;
}
