#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cg1=0,cg2=0;
    int cl1=0,cl2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]+a[j]>=10)
            {
                cg1=a[i];
                cg2=a[j];
            }
            else if(a[i]+a[j]<10)
            {
                cl1=a[i];
                cl2=a[j];
            }
        }
    }
    return 0;
}