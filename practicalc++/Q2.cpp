#include <bits/stdc++.h>
using namespace std;

bool com(string a, string b)
{
    return a < b;
}
int main()
{
    int n;
    cout<<"number of names ->";
    cin>>n;
    string arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"enter name "<<i+1<<" -> ";
        cin>>arr[i];
    }

    sort(arr, arr + n, com);

    cout<<"sorted array of name is -> ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}