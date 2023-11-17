#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int i, n;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxno = INT_MAX;
    int minno = INT_MIN;

    for (i = 0; i < n; i++)
    {
        maxno = max(maxno, a[i]);
        minno = min(minno, a[i]);
    }

    cout << "Max " << maxno << endl;
    cout << "Min " << minno << endl;

    return 0;
}