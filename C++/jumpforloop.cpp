#include <iostream>
using namespace std;

int main()
{
    int n, i, j = 1;
    n = 3000;
    for (i = 1; i < 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            cout << j << ". go out on ";
            cout << i << endl;
            n -= 300;
            j++;
        }
        if (n == 0)
        {
            break;
        }
    }
}