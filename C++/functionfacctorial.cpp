#include<iostream>
using namespace std;
int fact(int);

int main()
{
    int n1;

    cin>>n1;

    cout<<fact(n1)<<endl;

    return 0;
}
int fact(int n)
{
    int i,fac=1;

    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    
    return fac;
}