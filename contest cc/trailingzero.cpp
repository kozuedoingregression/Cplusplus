#include <bits/stdc++.h>
using namespace std;
    long long a, b;
    long long m = 1000000007;
    
int main()
{
    long long count = 0;
    long long diff;
    cin >> a >> b;
    diff=a-b;
    a++;

    while (diff>0)
    {
        diff--;
        long long prod = 1, r, a;
        while (a!= 0)
        {
            r =a % 10;
            a =a / 10;

            prod = (prod * r) % m;
        }

        if (prod == 0)
        {
            count++;
        }
        else
        {

            while (prod % 10 == 0)
            {
                prod = prod / 10;
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}