#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        int minn;
        cin>>a>>b>>c;

        minn=min({a,b,c});

        cout<<(a+b+c)-minn<<endl;
    }
}