#include<iostream>
using namespace std;

void maxfori(int [],int);

int main()
{
    int i,n;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    maxfori(a,n);

    return 0;
}
void maxfori(int a[],int n)
{
    int i,j;
    int mx=a[0];
    for(i=0;i<n;i++)
    {   
        if(mx<a[i])
        {
            int temp = mx;
            mx=a[i];
            a[i]=mx;
        }
        cout<<mx<<" ";
    }

}