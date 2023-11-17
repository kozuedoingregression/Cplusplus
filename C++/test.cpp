#include<iostream>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n],b[n];

        long long i,j;
        long long rm,div;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                b[i]=a[i];
            }
            else if(a[i]>=b[i-1])
            {
                b[i]=a[i];
            }
            else if(a[i]<b[i-1])
            {
                rm=b[i-1]%a[i];
                if(rm==0)
                {
                    div=0;
                }
                else
                {
                    div=a[i]-rm;
                }   
                b[i]=b[i-1]+div; 
            
            }
            
        }
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}