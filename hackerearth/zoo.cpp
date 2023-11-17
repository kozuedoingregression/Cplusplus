#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;

    getline(cin,s1);
    int x=0,y=0;

    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='z')
        {
            x++;
        }
        else if(s1[i]=='o')
        {
            y++;
        }
    }
    if(2*x==y)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}