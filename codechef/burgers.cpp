#include <bits/stdc++.h>
using namespace std;

int a, b;

void solve()
{
    cin >> a >> b;

    cout << min(a, b) << endl;
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