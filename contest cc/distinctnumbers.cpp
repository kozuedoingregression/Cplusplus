#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;

int power(int a, int n, int MOD)
{
    int p = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            p = p * a % MOD;
        }
        a = a * a % MOD;
        n /= 2;
    }
    return p;
}
int powerT(int a, int b)
{
    //int x = power(2, b, mod - 1);
    if (b >= 30)
        return power(a, power(2,b,mod - 1)+mod-1, mod);
    return power(a, (1 << b), mod);
    return (int)(" ");
}
int ans(int n, int p, int k)
{
    return(power(powerT(n,k),p,mod)-power(n,p-1,mod)+mod)%mod*n%mod*power(n-1,mod-2,mod)%mod;
    /*int x = powerT(n, k);
    int y = power(n, p - 1, mod);
    int z = power(n - 1, mod - 2, mod);
    int result = power(x, p, mod);*/

    //return (result - y + mod) % mod * n % mod * z % mod;
}
void solve()
{
    int n, k, fans = 1;
    cin >> n >> k;
    for (int i = 2; i <= n; i++)
    {
        int p = 0;
        while (n % i == 0)
        {
            p++;
            n /= i;
        }
        if (p != 0)
        {
            fans = fans * ans(i, p, k) % mod;
        }
    }
    if (n != 1)
    {
        fans = fans * ans(n, 1, k) % mod;
    }
    cout << fans << endl;
}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}