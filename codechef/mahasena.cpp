#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ev = 0, od = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            ev++;
        }
        else
        {
            od++;
        }
    }

    if (ev > od)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY" << endl;
    }

    return 0;
}