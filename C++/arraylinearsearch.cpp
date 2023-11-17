#include<iostream>
using namespace std;

int main()
{
    int i,n;

    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int key;

    cin>> key;

    bool flag=0;

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<a[i]<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"not found"<<endl;
    }

    return 0;
}