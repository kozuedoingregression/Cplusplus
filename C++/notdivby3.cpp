#include <iostream>
using namespace std;

int main()
{
    int n, i, j;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        else
        {
            cout << i <<" ";
        }
    }
}