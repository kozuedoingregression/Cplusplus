#include<iostream>
using namespace std;

void selectionshort(int [],int);

int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    selectionshort(a,n);

    return 0;
}
void selectionshort(int a[],int n)
{
    int i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
