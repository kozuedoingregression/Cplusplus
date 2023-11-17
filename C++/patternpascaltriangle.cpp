// nCr theroy
//1
//11    n=5
//121
//1331
//14641
#include <iostream>
using namespace std;

void pascal(int);
int fact(int);
int ncr(int, int);

int main()
{
    int n;

    cin >> n;

    pascal(n);

    return 0;
}
void pascal(int n1)
{
    int i, j;
    int n = 0, r = 0;

    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << ncr(n, r);
            r++;
        }
        cout << endl;
        n++;
        r = 0;
    }
}
int ncr(int n, int r)
{
    int c;

    c = (fact(n)) / (fact(n - r) * fact(r));

    return c;
}
int fact(int n)
{
    int fact = 1, i;

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}