#include<iostream>
using namespace std;

void maxOccurrence(char a[],int size)
{
    int count[26]={0};

    for(int i=0;i<size;i++)
    {
        count[a[i]-'a']++;
    }

    int maxCount=0, maxIndex=-1;
    for(int i=0;i<26;i++)
    {
        if(count[i]>maxCount)
        {
            maxCount=count[i];
            maxIndex=i;
        }
    }
    if(maxCount==1)
    {
        cout<<"No Dublicate Present"<<endl;
    }
    else
    {
        char maxChar = 'a'+maxIndex;
        cout<<maxChar<<"-"<<maxCount<<endl;
    }

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        char a[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        maxOccurrence(a,n);


    }
    return 0;
}