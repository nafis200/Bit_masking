#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, r, x;

    cin >> n >> l >> r >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 1; i < (1 << n); i++)
    {
        int mn = INT_MAX;
        int mx = INT_MIN;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i >> j & 1)
            {
                mn = min(mn, a[j]);
                mx = max(mx, a[j]);
                sum += a[j];
            }
        }
        if(sum >= l && sum <= r && (mx - mn) >= x){
            ans++;
        }
    }
    cout << ans << "\n";
}
