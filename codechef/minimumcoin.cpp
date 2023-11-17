#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;
        int rem,count=0;

        rem=x%10;

        while(rem!=0)
        {
            count++;
            rem--;
        }
        cout<<count<<endl;
    }
}