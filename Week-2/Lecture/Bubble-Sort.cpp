#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

void bubbleSort(vector<int> &v){
    int n = (int)v.size();
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cnt = 0;
        for(int j = 0; j < n - 1; j++){
            if(v[j] > v[j + 1]){
                swap(v[j], v[j + 1]);
                cnt++;
            }
        }
        if(!cnt) break;
    }
} // O(n^2)

int main(){

    bubbleSort(v);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
/*

 */