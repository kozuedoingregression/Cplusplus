#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    
    ll mn=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>=0 && mn>arr[i])
        {
            mn=arr[i];
        }
    }

    ll mnn=*min_element(arr.begin(),arr.end());
    ll mxx=*max_element(arr.begin(),arr.end());

    if(mn==LLONG_MAX)
    {
        cout<<mxx*mxx<<" "<<mnn*mnn<<endl;
    }
    else
    {
        if(mnn<0)
        {
            cout<<mnn*mxx<<" "<<max(mxx*mxx,mnn*mnn)<<endl;
        }
        else
        {
            cout<<mnn*mnn<<" "<<mxx*mxx<<endl;
        }   
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}