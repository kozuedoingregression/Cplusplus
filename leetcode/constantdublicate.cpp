#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}