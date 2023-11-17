#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        int count=0;

        while(a!=b)
        {
            a+=x;
            count++;

        }
        cout<<count<<endl;
    }
}