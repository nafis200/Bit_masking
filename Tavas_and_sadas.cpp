#include <bits/stdc++.h>
using namespace std;
vector<long long> v;

void lucky_number(long long num)
{
    v.push_back(num);
    if (num > 1000000000)
    {
        return;
    }
    lucky_number(num * 10 + 4);
    lucky_number(num * 10 + 7);
}

int main()
{
    lucky_number(0);
    sort(v.begin(), v.end());
    v.resize(unique(v.begin(), v.end()) - v.begin());
    int n;
    cin >> n;
    cout << lower_bound(v.begin(), v.end(), n) - v.begin();
}