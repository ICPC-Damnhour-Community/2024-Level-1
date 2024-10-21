#include <bits/stdc++.h>

using namespace std;

#define clr(v,d) memset(v, d, sizeof(v))

void fast(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve(){
    int n;
    cin >> n;
    int a[n + 2], freqTwo[n + 2];
    vector<int> zeros;
    // indices of elements == 0 -> to access elements between them
    //a = 1 2 -1 2
    //z = -1 4
    zeros.push_back(-1);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if (!a[i]) zeros.push_back(i);
    }
    zeros.push_back(n);

    clr(freqTwo, 0);
    for (int i = 0; i < n; i++) {
        if (!i) freqTwo[i] = (abs(a[i]) == 2);
        else freqTwo[i] = freqTwo[i - 1] + (abs(a[i]) == 2);
    }//prefix on freq of Twos
    //a = 1 2 -1 2
    //freq = 0 1 1 2
    vector<pair<int, int>> ans;
    for (int i = 1; i < zeros.size(); i++) {
        if(zeros[i - 1] + 1 == zeros[i]) continue;
        int neg = 0;
        for (int j = zeros[i - 1] + 1; j <= zeros[i] - 1; j++)
            neg += a[j] < 0;

        // here we will check on sign if neg % 2 == 0 then this max product so push its range
        if (neg % 2 == 0) ans.emplace_back(zeros[i - 1] + 1, zeros[i] - 1);
        // else we will push in ans all prefixes and suffixes of ranges only when neg % 2 == 0 also
        else {
            //prefixes
            neg = 0;
            for (int j = zeros[i - 1] + 1; j <= zeros[i] - 1; j++) {
                neg += a[j] < 0;
                if (neg % 2 == 0)
                    ans.emplace_back(zeros[i - 1] + 1, j);
            }
            //suffixes
            neg = 0;
            for (int j = zeros[i] - 1; j >= zeros[i - 1] + 1; j--) {
                neg += a[j] < 0;
                if (neg % 2 == 0)
                    ans.emplace_back(j, zeros[i] - 1);
            }
        }
    }

    if (ans.empty()) {
        cout << "0 " << n << endl;
        return;
    }//all zeros or all pos

    // else maximize product -> max freq of Twos in ranges we have in ans
    int mx = -1e9, lft = -1, rgt = -1;
    for (auto it: ans) {
        if (mx < freqTwo[it.second] - freqTwo[it.first] + (abs(a[it.first]) == 2)) {
            mx = freqTwo[it.second] - freqTwo[it.first] + (abs(a[it.first]) == 2);
            // the no of elements we delete it
            lft = it.first;
            rgt = n - it.second - 1;
        }
    }
    cout << lft << " " << rgt << endl;
}
int main() {
    fast();
    
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
