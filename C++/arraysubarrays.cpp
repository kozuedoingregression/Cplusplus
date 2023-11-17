#include<iostream>
using namespace std;

void subarray(int [], int);

int main()
{
    int i,n;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    subarray(a,n);

    return 0;
}
void subarray(int a[],int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {   
        for(j=i;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}