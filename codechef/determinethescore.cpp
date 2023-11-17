#include <bits/stdc++.h>
using namespace std;

int x, n;

void solve()
{
    cin >> x >> n;
    x = x / 10;

    cout << x * n << endl;
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