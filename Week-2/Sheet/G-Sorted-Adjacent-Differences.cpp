#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
#define endl '\n'
#define clr(v, d) memset(v, d, sizeof(v))

void fast() {
    cin.tie(nullptr);
    istream::sync_with_stdio(false);
}

const int N = 1e5 + 5;
int a[N];
vector<int> v;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        v.clear();
        
        int n;
        cin >> n;
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        sort(a, a + n);
        
        int j = n - 1, k = 0;
        
        for(int i = 0; i < n; i++){
            if (i & 1)
                v.push_back(a[j]), j--;
            else
                v.push_back(a[k]), k++;
        }
        
        reverse(v.begin(), v.end());
        
        for (auto it: v)
            cout << it << ' ';
        
        cout << endl;
    }
    
    return 0;
}
