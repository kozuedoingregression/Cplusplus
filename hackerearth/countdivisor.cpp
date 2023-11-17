#include <iostream>
using namespace std;

int main()
{
    int I, R, K, count = 0;

    cin >> I >> R >> K;

    int i, j;

    for (i = I; i <= R; i++)
    {
        if (i % K == 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}