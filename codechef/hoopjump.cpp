#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int temp, n, i, j;
        cin >> n;

        temp = n - 1;
        temp = temp / 2;
        temp++;

        cout << temp << endl;
    }
}