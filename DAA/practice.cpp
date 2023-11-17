#include<iostream>
using namespace std;

int partition(int a[],int l,int r)
{
   int pivot=a[r];
   int i=l-1;

   for(int j=l;j<r-1;j++)
   {
        if(a[j]<pivot)
        {
            i++;
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
   }
    int temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;

    return i+1;
}

void quickSort(int a[],int l,int r)
{
    if(l<r)
    {
        int pr=partition(a,l,r);
        quickSort(a,l,pr-1);
        quickSort(a,pr+1,r);
    }
}

int main()
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    quickSort(a,0,4);

    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
    return 0;
}