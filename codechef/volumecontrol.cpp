#include<iostream>
using namespace std;

int solve(int ,int,int);

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int x,y,count =0;
        cin>>x>>y;

        cout<<solve(x,y,count)<<endl;
    }

    return 0;
}
int solve(int x,int y,int count)
{
    if(x>y)
    {
        while(y!=x)
        {
            count ++;
            y++;
        }
    }
    else if(x<y)
    {
        while(x!=y)
        {
            count++;
            x++;
        }
    }

    return count;
}