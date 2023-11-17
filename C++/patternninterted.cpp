#include <iostream>
using namespace std;

int main()
{
    int i, j, n, count = 1;

    cin >> n;
    for (i = n; i >= 1; i--)
    {
        count = 1;
        
        for (j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }
}