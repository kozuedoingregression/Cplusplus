#include <iostream>

using namespace std;

long long solve(long long a[], long long n)
{
    long long i, prod = 1;

    for (i = 0; i < n; i++)
    {
        prod =(prod*a[i])%(1000000007);
    }
    return prod;
}

int main()
{
    long long i, n;
    cin >> n;
    long long a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << solve(a, n) << endl;
}