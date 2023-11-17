#include <bits/stdc++.h>
using namespace std;

int x, y, z;

void solve()
{
    int count = 0;
    cin >> x >> y >> z;
    while (x--)
    {
        count += 4;
    }
    while (y--)
    {
        count += 2;
    }
    cout << count << endl;
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