#include<iostream>
using namespace std;

void lsearch(int [],int);

int main()
{
    int n,i;

    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    lsearch(a,n);
}
void lsearch(int a[],int n)
{
    int i,key;

    cin>>key;

    bool flag=0;

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<< a[i];
            flag =1;
            break;
        }
    }
    if(flag ==0)
    {
        cout<<"not found"<<endl;
    }
}