#include <iostream>
#include <cmath>
using namespace std;

int big(int, int, int);
bool pytha(int, int, int);

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    cout << pytha(a, b, c);

    return 0;
}
bool pytha(int a, int b, int c)
{
    bool flag = 0;
    int p, m = big(a, b, c);
    if (a == m)
    {
        p = pow(b, 2) + pow(c, 2);
        if (p == pow(m, 2))
        {
            flag = 1;
        }
    }
    else if (b == m)
    {
        p = pow(a, 2) + pow(c, 2);
        if (p == pow(m, 2))
        {
            flag = 1;
        }
    }
    else if (c == m)
    {
        p = pow(a, 2) + pow(b, 2);
        if (p == pow(m, 2))
        {
            flag = 1;
        }
    }
    return flag;
}
int big(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}