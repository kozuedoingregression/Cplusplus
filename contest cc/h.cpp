#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int b[], int n, int n2)
{
    int i, j, indx;

    for (j = 0; j < n2; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] == b[j])
            {
                a[i] = -1;
            }
        }
        /*for (i = indx - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;*/
        
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int n2;
        cin >> n2;
        int b[n2];
        for (int i = 0; i < n2; i++)
        {
            cin >> b[i];
        }

        solve(a, b, n, n2);
    }

    return 0;
}