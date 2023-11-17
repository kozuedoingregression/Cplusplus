#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n1,n2,n3;
    int pri=0,sec=0;
    cin>>n1>>n2>>n3;
    int sum= n1+n2+n3;

    if(n1>1 && n2>1 && n3>1)
    {
        sec+=3;
        cout<<sum+sec<<endl;
    }
    while(1)
    {
        if(n1==0||n2==0||n3==0)
        {
            
        }
    }

    cout<<(pri+sec)<<endl;
}

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}