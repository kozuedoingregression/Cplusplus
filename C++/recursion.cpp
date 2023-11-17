#include <iostream>
using namespace std;

void revnum(int i, int n)
{
    if (n < i)
    {
        cout << endl;
        return;
    }
    else
    {
        cout << n << " ";
        n--;
        revnum(i, n);
    }
}

void num(int i, int n)
{
    if (i > n)
    {
        cout << endl;
        return;
    }
    else
    {
        cout << i << " ";
        i++;
        num(i, n);
    }
}

void name(int count, int n)
{

    if (count > n)
    {
        //cout << endl;
        return;
    }
    else
    {
        cout << "name"<< " ";
        count++;
        name(count, n);
    }
}
void backtracknum(int i, int n)
{   
    if(i<1)
    {
        cout<<endl;
        return;
    }
    else
    {
        backtracknum(i-1,n);
        cout<<i<<" ";

    }

}
void backtrackrevnum(int i,int n)
{
    if(i>n)
    {
        cout<<endl;
        return;
    }
    else 
    {
        i++;
        backtrackrevnum(i,n);
        cout<<i<<" ";  
    }
}

int main()
{
    int n;
    cin >> n;
    int count = 1;

    revnum(1, n);
    num(1, n);
    name(count, n);
    backtracknum(n,n);
    backtrackrevnum(0,n);
}