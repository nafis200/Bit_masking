// #include <bits/stdc++.h>
// using namespace std;
// const long long int MOD = 1e9 + 7;

// int main() {
//     long long int t;
//     cin >> t;
//     while (t--) {
//         long long int n;
//         cin >> n;
//         vector<long long int> a(n);
//         for (long long int &x : a) cin >> x;

//         long long int total = 0;
//         for (long long int i = 0; i < n; ++i) {
//             for (long long int j = 0; j < n; ++j) {
//                 long long int and_val = (a[i] & a[j]) % MOD;
//                 for (long long int k = 0; k < n; ++k) {
//                     long long int or_val = (a[j] | a[k]) % MOD;
//                     total = (total + ((and_val % MOD) * (or_val % MOD)) % MOD) % MOD;
//                 }
//             }
//         }
//         cout << total << '\n';
//     }
//     return 0;
// }


// optimise


// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int MOD = 1e9 + 7;

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> x(n);
//         for (int i = 0; i < n; i++) {
//             cin >> x[i];
//         }

//         int answer = 0;

//         for (int j = 0; j < n; ++j) {
//             int sum1 = 0;
//             int sum2 = 0;

//             for (int i = 0; i < n; ++i) {
//                 sum1 = (sum1 + (x[i] & x[j])) % MOD;
//             }

//             for (int k = 0; k < n; ++k) {
//                 sum2 = (sum2 + (x[j] | x[k])) % MOD;
//             }
           
//             answer = (answer + (sum1 * sum2) % MOD) % MOD;
//         }

//         cout << answer << "\n";
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> x(n);
        for (int i = 0; i < n; i++) cin >> x[i];

        vector<int> bit_count(60, 0);
        for (int num : x) {
            for (int b = 0; b < 60; b++) {
                if (num & (1LL << b)) bit_count[b]++;
            }
        }

        int answer = 0;

        for (int j = 0; j < n; j++) {
            int sum1 = 0;
            int sum2 = 0;

            for (int b = 0; b < 60; b++) {
                int bit_val = (1LL << b) % MOD;

                if (x[j] & (1LL << b)) {
                    sum1 = (sum1 + bit_val * bit_count[b]) % MOD;
                }

                if (x[j] & (1LL << b)) {
                    sum2 = (sum2 + bit_val * n) % MOD;
                } else {
                    sum2 = (sum2 + bit_val * bit_count[b]) % MOD;
                }
            }

            answer = (answer + sum1 * sum2) % MOD;
        }

        cout << answer << "\n";
    }

    return 0;
}


