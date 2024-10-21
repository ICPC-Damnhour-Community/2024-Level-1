#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

int n = 7;

vector<int> v = {9, 8, 7, 6, 5, 3, 2};

void merge(int l, int mid, int r){

    vector<int> lft, rgt;

    for(int i = l; i <= mid; i++) lft.push_back(v[i]);
    for(int i = mid + 1; i <= r; i++) rgt.push_back(v[i]);

    lft.push_back(INT32_MAX);
    rgt.push_back(INT32_MAX);

    int p1 = 0, p2 = 0;
    for(int i = l; i <= r; i++){
        if(lft[p1] < rgt[p2]){
            v[i] = lft[p1++];
        }else{
            v[i] = rgt[p2++];
        }
    }
}

void mergeSort(int l, int r){
    // base case
    if(l >= r) return;

    int mid = (l + r) / 2;

    // transition
    mergeSort(l, mid);
    mergeSort(mid + 1, r);

    // magical function
    merge(l, mid, r);

} // O(nlog(n))

int main(){

    mergeSort(0, n - 1);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
/*

 */