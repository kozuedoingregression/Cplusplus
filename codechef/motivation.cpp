#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a1[n], a2[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a1[i] >> a2[i];
        }
        int maxa1 = x;
        int maxa2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a1[i] <= maxa1)
            {
                if(a2[i]>maxa2)
                {
                    maxa2 = a2[i];
                }
                
            }
        }
        cout << maxa2 << endl;
    }
}
