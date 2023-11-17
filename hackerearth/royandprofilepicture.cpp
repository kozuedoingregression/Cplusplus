#include <iostream>
using namespace std;

void solve(long long n1, long long n2, long long l)
{
    if (n1 < l || n2 < l)
    {
        cout << "UPLOAD ANOTHER" << endl;
    }
    else if (n1 == l && n2 == l)
    {
        cout << "ACCEPTED" << endl;
    }
    else if (n1 > l && n2 > l && n1 == n2)
    {
        cout << "ACCEPTED" << endl;
    }
    else
    {
        cout << "CROP IT" << endl;
    }
}

int main()
{
    long long l, t;
    cin >> l >> t;

    while (t--)
    {
        long long n1, n2;
        cin >> n1 >> n2;
        solve(n1, n2, l);
    }

    return 0;
}