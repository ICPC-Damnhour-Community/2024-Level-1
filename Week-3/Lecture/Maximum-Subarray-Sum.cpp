#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

const int N = 1e5 + 5;
int n;
int a[N];

int algo1(){
    //     0  1   2   3  4
    //a = {-1, 2, 4, -3, 5, 2, -5, 2}
    int mx = 0;
    for(int i = 0; i < n; i++){ // O(n)
        for(int j = i; j < n; j++){ // O(n)
            int sum = 0;
            for(int k = i; k < j; k++){ // O(n)
                sum += a[k];
            } //
            mx = max(mx, sum);
        }
    }// O(n ^ 3)
    return mx;
} // O(n ^ 3)

int algo2(){
    int mx = 0;
    for(int i = 0; i < n; i++){ // O(n)
        int sum = 0;
        for(int j = i; j < n; j++){ // O(n)
            sum += a[j];
            mx = max(mx, sum);
        }
        //mx = max(mx, sum);
    }
    return mx;
} // O(n ^ 2)

int algo3(){
    int mx = a[0], sum = a[0];
    for(int i = 0; i < n; i++){
        sum = max(a[i], sum + a[i]);
        mx = max(sum, mx);
    }
    return mx;
}// O(n)

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    cout << "Result of O(n^3) Algorithm: " << algo1() << endl;

    cout << "Result of O(n^2) Algorithm: " << algo2() << endl;

    cout << "Result of O(n) Algorithm: " << algo3() << endl;
    
    return 0;
}
/*

*/