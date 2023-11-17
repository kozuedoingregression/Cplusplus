#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j, i, n;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    short(a);

    for (i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            cout << a[i];
            break;
        }
    }

    return 0;
}