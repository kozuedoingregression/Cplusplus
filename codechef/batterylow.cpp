#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;

    while (t--)
    {
        cin >> x;

        if (x > 15)
        {
            cout << "NO" << endl;
        }
        else if (x <= 15)
        {
            cout << "yes" << endl;
        }
    }

    return 0;
}