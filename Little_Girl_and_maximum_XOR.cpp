#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a, b;
    cin >> a >> b;

    bitset<60>x(a);
    bitset<60>y(b);
    long long int ans = 0;

    for(int i = 60; i >= 0; i--){
         if(x[i] != y[i]){
            ans = 1LL * (1LL << (i + 1)) - 1;
            break; 
         }
    }

    // cout << x << "\n";
    // cout << y << "\n";

    cout << ans << "\n";

}

// 01000
// 10000
// xor
// 11111