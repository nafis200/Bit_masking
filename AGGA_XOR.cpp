#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 5];
        for(int i = 1; i <= n; i++){
             cin >> a[i];
        }
        int pref[ n + 5] = {0};
        pref[1] = a[1];
        for(int i = 2; i <= n; i++){
            pref[i] = pref[i - 1] ^ a[i];
        }
        bool ok = false;
        for(int i = 1; i < n; i++){
            int x = pref[i];
            int y = pref[n] ^ pref[i];
            if(x == y){
                ok = true;
                break;
            }
        }
        for(int i = 1; i < n - 1; i++){
            if(ok == true){
                break;
            }
            for(int j = i + 1; j < n; j++){
                int x = pref[i];
                int y = pref[j] ^ pref[i];
                int z = pref[n] ^ pref[j];
                if(x == y && x == z){
                    ok = true;
                    break;
                }
            }
        }
        if(ok){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}











