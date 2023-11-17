#include <iostream>
using namespace std;

void insertionshort(int[], int);

int main()
{
    int i, n;

    cin >> n;

    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    insertionshort(a, n);

    return 0;
}
void insertionshort(int a[], int n)
{
    int i, j;

    for (i = 1; i < n; i++)
    {
        int temp = a[i];
        j = i - 1;
        while (a[j] > temp && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}