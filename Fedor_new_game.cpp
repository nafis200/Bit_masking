#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k; cin >> n >> m >> k;
    int a[m + 1];
    for(int i = 0; i <= m; i++){
         cin >> a[i];
    }
    int ans = 0;
    int count = 0;
    for(int i = 0; i < m; i++){
        ans = __builtin_popcount(a[i] ^ a[m]);
        if(ans <= k){
          count++;
        }
    }
    cout << count << "\n";
}