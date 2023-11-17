#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        string a, b, c, d;

        int start = 0;
        int mid = n / 2;
        int end = n;

        a = str.substr(start, (mid - start));
        b = str.substr(mid, (end - mid));

        c = a + b;
        d = b + a;

        if (c==str&&d==str)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}