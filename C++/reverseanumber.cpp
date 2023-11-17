#include<iostream>
using namespace std;

int main()
{
    int i,j,n;

    cin>>n;

    int ld,rev;

    while(n>0)
    {
        ld= n%10;
        rev=rev*10+ld;
        n=n/10;
    }

    cout<<rev<<endl;

}