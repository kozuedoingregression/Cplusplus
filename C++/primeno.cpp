#include<iostream>
using namespace std;

int main()
{
    int n,i,j;

    cin>>n;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is not prime"<<endl;
            break;
        }
    }
    if(n==i)
    {
        cout<<n<<" is prime"<<endl;
    }



}