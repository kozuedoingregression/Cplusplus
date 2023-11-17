#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    bool flag=0;

    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    flag=1;
                    cout<<"YES"<<endl;
                    break;
                }
                
            }
            if(flag=1)
            {
                break;
            }
        }
        if(flag=0)
        {
            cout<<"NO"<<endl;
        }
    }
}
