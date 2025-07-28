#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[33] = {0};

        int n;
        cin >> n;
     
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            a[31 - __builtin_clz(x)]++;
        }

        long long ans = 0;

        for(int i = 0; i < 32; i++){
            ans+= (1LL * a[i] * (a[i] - 1)) / 2LL;
        }

        cout << ans << "\n";
        
    }
}