#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int sum = 0;

    sum = a + b;

    return sum;
}

int main()
{
    int n1, n2, t;
    cin >> t;

    while (t--)
    {
        cin >> n1 >> n2;

        cout << "sum " << sum(n1, n2) << endl;
    }
}