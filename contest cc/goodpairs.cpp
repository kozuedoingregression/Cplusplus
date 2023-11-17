#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll i, j;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    for (auto x : mp)
    {
        ans += (x.second * (x.second - 1)) / 2;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}