#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string str;
        string a, b;

        cin >> n;
        cin >> str;
        int i=0;

        while (n != 0)
        {
            a[100] = str[i];
            n--;
            i++;
            b[100] = str[i];
            n--;
            i++;
        }

        // for ( i = 2; i < n; i++)
        // {
        //     if (i % 2 == 0)
        //     {
        //         a[i] = str[i];
        //     }
        //     else
        //     {
        //         b[i] = str[i];
        //     }
        // }
        cout << a << endl;
        cout << b << endl;
        // if(a==b)
        // {
        //     cout<<"YES"<<endl;
        // }
        // else
        // {
        //     cout<<"NO"<<endl;
        // }
    }
}