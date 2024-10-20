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
    fast();
    int n; 
    cin >> n;
    
    int freq[50] = { };
    
    while(n--){
        char num; cin >> num;
        freq[num]++;
    }
    
    cout << abs(freq[48] - freq[49]);
    
    return 0;
}