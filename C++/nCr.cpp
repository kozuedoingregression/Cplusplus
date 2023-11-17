#include <iostream>
using namespace std;

int fact(int);
int ncr(int, int);

int main()
{
    int n, r;

    cin >> n >> r;

    cout << ncr(n, r) << endl;

    return 0;
}
int ncr(int n, int r)
{
    int c;

    c = (fact(n)) / (fact(n - r) * fact(r));

    return c;
}
int fact(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}
