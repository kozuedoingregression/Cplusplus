//hollow rectangle
#include<iostream>
using namespace std;

int main()
{
    int i,j,r,c;

    cin>>r>>c;

    for(i=0;i<r;i++)
    { 
        
        for(j=0;j<c;j++)
        {
            if (i==0 || i==r-1 || j==0 || j==c-1)
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}