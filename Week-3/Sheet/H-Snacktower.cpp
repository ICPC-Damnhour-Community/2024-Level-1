#include <iostream>
using namespace std;

void fast(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main() {
    fast();

    int f[100005] = { };
    
    int n; cin >> n;
    
    int n1 = n;
    
    int a[n];
    
    for(int i = 0; i < n; i++){
       cin >> a[i];
        
       f[a[i]] = 1;
        
       if(n1 == a[i]){
           for(int j = n1; j > 0; j--){
               if(f[j] == 1){
                   cout << j << " ";
                   f[j] = 0;
                   n1--;
               }
               else break;
           }
       }
       cout << endl;
    }

    return 0;
}
