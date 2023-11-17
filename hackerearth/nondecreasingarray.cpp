#include <iostream>
using namespace std;

void check(long long[], long long);

int main()
{
    long long t, n;
    long long i, j;

    cin >> t;

    while (t--)
    {
        cin >> n;
        long long a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        check(a, n);
    }

    return 0;
}
void check(long long a[], long long n)
{
    long long i, j, b[n];
    long long rm, div;

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            b[i] = a[i];
        }
        else if (a[i] >= b[i - 1])
        {
            b[i] = a[i];
        }
        else if (a[i] < b[i - 1])
        {
            rm = b[i - 1] % a[i];
            if (rm == 0)
            {
                div = 0;
            }
            else
            {
                div = a[i] - rm;
            }
            b[i] = b[i - 1] + div;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}