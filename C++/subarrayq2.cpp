#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }

    int i, ans = 0;
    int mx = -1;

    for (i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << endl;
}

int main()
{
    int i, n;
    cin >> n;
    int a[n];

    a[n + 1];
    a[n] = -1;

    for (i = 0; i < n; i++)
    {
        cin >> a[n];
    }

    solve(a, n);

    return 0;
}