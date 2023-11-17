#include <bits/stdc++.h>
using namespace std;

int n, x, k;

void solve()
{
    int count = 1;
    cin >> n >> x >> k;
    if (k > x)
    {
        while (k >= x)
        {
            k -= x;
            count++;
        }
        if (count <= n)
        {
            cout << count << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }
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