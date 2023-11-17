#include <bits/stdc++.h>
using namespace std;

int x;

void solve()
{
    cin >> x;
    x *= 2;

    cout << x * 5 << endl;
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