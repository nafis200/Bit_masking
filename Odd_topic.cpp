#include <bits/stdc++.h>
using namespace std;

const int MAX_TOPIC = 4001;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    vector<bitset<MAX_TOPIC>> m1(n), m2(m);
    bitset<MAX_TOPIC> b1, b2;

    int t;
    for (int i = 0; i < n; i++) {
        cin >> t;
        b1.flip(t);
        m1[i] = b1;
    }

    for (int i = 0; i < m; i++) {
        cin >> t;
        b2.flip(t);
        m2[i] = b2;
    }

    while (q--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        bitset<MAX_TOPIC> res;
        if (l1 == 1)
            res = m1[r1 - 1];
        else
            res = m1[r1 - 1] ^ m1[l1 - 2];

        if (l2 == 1)
            res ^= m2[r2 - 1];
        else
            res ^= m2[r2 - 1] ^ m2[l2 - 2];

        cout << res.count() << "\n";
    }

    return 0;
}
