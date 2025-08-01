// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int t; cin >> t;
//   while(t--){
//      int n; cin >> n;
//      vector<int>v(n);
//      vector<int>bits(32,0);
//      vector<int>g;
//      for(int i = 0; i < n; i++){
//         cin >> v[i];
//      }
//      int ans = 0;
//      for(int i = 0; i < n; i++){
//         for(int k = 0; k < 32; k++){
//             if((v[i] >> k) & 1){
//                 bits[k]++;
//             }
//         }
//      }
//      for(int i = 0; i < 32; i++){
//         ans = __gcd(ans,bits[i]);
//      }

//      if(ans == 0){
//         for(int i = 1; i <= n; i++){
//             cout << i << " ";
//         }
//         cout << "\n";
//      }
//      else{
//         for(int i = 1; i * i <= ans; i++){
//               if(ans % i == 0){
//                 g.push_back(i);
//               }
//             if(ans / i != i){
//                 g.push_back(ans / i);
//             }
//         }
//         sort(g.begin(),g.end());
//         for(int i = 0; i < (int)g.size();i++){
//             cout << g[i] << " ";
//         }
//         cout << "\n";
//      }
//   }
// } 


#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
     int n; cin >> n;
     vector<int>v(n);
     vector<int>bits(32,0);
     vector<int>g;
     for(int i = 0; i < n; i++){
        cin >> v[i];
     }
     for(int i = 0; i < n; i++){
        for(int k = 0; k < 32; k++){
            if((v[i] >> k) & 1){
                bits[k]++;
            }
        }
     }
   

     for(int i = 1; i <= n; i++){
         bool ok = true;
         for(int k = 0; k < 32; k++){
             if(bits[k] % i != 0){
                ok = false;
             }
         }
         if(ok){
            cout << i << " ";
         }
     }
     cout << "\n";
  }
} 