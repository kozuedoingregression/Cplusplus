// half pyramid using numbers left
#include <iostream>
using namespace std;

int main()
{
    int n, i, j;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}