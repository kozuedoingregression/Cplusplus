#include<iostream>
#include<math.h>
using namespace std;

int main()
{ 
    int i,j,n,sum=0;

    cin>>n;

    int o=n ;

    while(n>0)
    {
        int ld = n%10;
        sum+=pow(ld,3);
        n=n/10;
    }

    if(sum== o)
    {
        cout<<"Armstrong"<<endl;
    }
    else
    {
        cout<<"Not Armstrong"<<endl;
    }

}