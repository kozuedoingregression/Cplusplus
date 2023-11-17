#include <bits/stdc++.h>
using namespace std;

int x, y, a;

void solve()
{
    cin >> x >> y >> a;

    if (a>=x&&a<y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout<<"NO"<<endl;
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