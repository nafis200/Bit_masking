#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    bool ok = false;

    for(int i = 1; i < (1 << n); i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            if((i >> j) & 1){
                sum += a[j];
            }
            else{
                sum -= a[j];
            }
        }
        if(sum % 360 == 0){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

}