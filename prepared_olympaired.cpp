#include <bits/stdc++.h>
using namespace std;

int n, l, r, x;
vector<int> a(20);

int solve(int i, int cnt, int sum, int mn, int mx) {
    if (i == n) {
        if (cnt >= 2 && sum >= l && sum <= r && (mx - mn) >= x) {
            return 1;
        }
        return 0;
    }


    int ans = solve(i + 1, cnt, sum, mn, mx);

  
     ans += solve(i + 1, cnt + 1, sum + a[i], min(mn, a[i]), max(mx, a[i]));

    return ans;
}

int main() {
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    cout << solve(0, 0, 0, 1e9, 0) << endl;
    return 0;
}
