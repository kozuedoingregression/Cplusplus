#include <bits/stdc++.h>
using namespace std;
long long a, b;
long long i, j;
long long m = 1000000007;
// long long a[100000];
long long prod = 1,r;

int main()
{
    long long count = 0;
    long long diff;
    cin >> a >> b;
    diff = a - b;
    long long ar[100000];
    a++;
    for (i = 0; i < 100000; i++)
    {
        while (a != 0)
        {
            r = a % 10;
            a = a / 10;

            prod = (prod * r) % m;
        }
        ar[i] = prod;
        a++;
    }
    

    while (a!= b)
    {

        if (ar[diff] == 0)
        {
            count++;
        }
        else
        {

            while (ar[diff] % 10 == 0)
            {
                ar[diff] = ar[diff] / 10;
                count++;
            }
        }
        a++;
    }
    cout << count << endl;

    return 0;
}