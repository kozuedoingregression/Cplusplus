#include<iostream>
using namespace std;

void binarysearch(int a[],int l,int h,int key)
{
    int mid=1+(h-l)/2;
    if(a[mid]==key)
    {
        cout<< a[mid];
    }
    else if(a[mid]<key)
    {
        binarysearch(a,mid+1,h,key);
    }
    else if(a[mid]>key)
    {
        binarysearch(a,l,mid-1,key);
    }
    else
    {
        cout<<"notfound"<<endl;
    }
}

int main()
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
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    binarysearch(arr,1,4,5);


}
