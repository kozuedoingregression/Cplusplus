#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;

        int cir;

        cir = (2 * n) + (2 * m);

        cout << cir * x << endl;
    }
}