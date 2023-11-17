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

    int l = 0, h = n;

    int key;

    cin >> key;

    for (i = 0; i < n; i++)
    {
        int mid = (l + h) / 2;

        if (a[mid] == key)
        {
            cout << a[mid];
            break;
        }
        else if (a[mid] < key)
        {
            l = mid + 1;
        }
        else if (a[mid] > key)
        {
            h = mid - 1;
        }
    }

    return 0;
}