//print all prime no. in a given range
#include<iostream>
using namespace std;

int main()
{
    int f, i,n1,n2,count=0;

    cin>>n1>>n2;
    f=n1;
    while(n1!=n2)
    {

    
        for(i=2;i<n1;i++)
        {
            if(n1%i==0)
            {
                break;
            }
            
        }
        if(n1==i)
        {
            cout<<n1<<" ";
            count++;
        }
        n1++;
    }
    
    cout<<endl<<"there are "<<count<<" prime no. between "<<f <<" and "<<n2;
}