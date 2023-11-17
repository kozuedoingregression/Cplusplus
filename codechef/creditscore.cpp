#include<iostream>
using namespace std;

void solve(int);

int main()
{
    int num;
    cin>>num;

    solve(num);
    return 0;
}
void solve(int n)
{
    if(n>=750)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}