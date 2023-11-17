#include <iostream>
using namespace std;

int solve(int n)
{
    int fact = 1, i;

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;

    cout << solve(n) << endl;
}