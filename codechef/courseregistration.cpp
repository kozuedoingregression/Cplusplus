#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y, int z)
{
    int l = y - z;
    if (x > l)
    {
        cout << "NO" << endl;
    }
    else if (x <= l)
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        solve(x, y, z);
    }

    return 0;
}