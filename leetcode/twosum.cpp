#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=10000, i, key;
    int a[n];
    cin>>a[n];

    cin >> key;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] + a[j] == key)
            {
                cout << "[" << i << "," << j << "]" << endl;
                break;
            }
        }
    }

    return 0;
}