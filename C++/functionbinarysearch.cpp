#include <iostream>
using namespace std;

void binarysearch(int[], int, int);

int main()
{
    int i, n;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;

    cin >> key;

    binarysearch(a, n, key);

    return 0;
}
void binarysearch(int a[], int n, int key)
{
    int i, l = 0, h = n;

    bool flag = 0;

    for (i = 0; i < n; i++)
    {
        int mid = (l + h) / 2;

        if (a[mid] == key)
        {
            cout << a[mid];
            flag = 1;
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
    if (flag == 0)
    {
        cout << "not found" << endl;
    }
}