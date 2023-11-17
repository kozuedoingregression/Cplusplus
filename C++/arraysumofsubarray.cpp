#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0, sumt = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            sum += a[j];
            cout << sum << " ";
        }
        
    }
   
    
}