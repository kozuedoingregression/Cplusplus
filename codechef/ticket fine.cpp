#include <bits/stdc++.h>
using namespace std;

int x, p, q;

void solve()
{
    cin >> x >> p >> q;

    p = p - q;

    cout << x * p << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}