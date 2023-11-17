#include<iostream>
using namespace std;

void solve(int ,int);

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
void solve(int x,int y)
{
    if(x>y)
    {
        cout<<"SECOND"<<endl;
    }
    else if(x<y)
    {
        cout<<"FIRST"<<endl;
    }
    else if(x==y)
    {
        cout<<"ANY"<<endl;
    }
}