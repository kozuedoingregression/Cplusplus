#include<iostream>
using namespace std;

void bubbleshort(int [],int);

int main()
{
    int i,j,n;

    cin>>n;

    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    bubbleshort(a,n);

    return 0;
}
void bubbleshort(int a[],int n)
{
    int i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }    
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}