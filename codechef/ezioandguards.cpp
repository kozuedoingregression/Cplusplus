#include<iostream>
using namespace std;

void solve(int x,int y)
{
    if(x<y)
    {
        cout<<"NO"<<endl;
    }
    else if(x=y)
    {
        cout<<"YES"<<endl;
    }
    else if(x>y)
    {
        cout<<"YES"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y;
        cin>>x>>y;

        solve(x,y);
    }

    return 0;
}