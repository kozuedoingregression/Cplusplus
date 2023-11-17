#include <iostream>
using namespace std;

#define row 4
#define col 4

void spiral(int r, int c, int a[row][col])
{
    int i, k = 0, l = 0;

    while (k < r && l < c)
    {
        for (i = 0; i < c; i++)
        {
            cout << a[k][i] << " ";
        }
        k++;
        for (i = k; i < r; i++)
        {
            cout << a[i][c - 1] << " ";
        }
        c--;
        if (k < r)
        {
            for (i = c - 1; i >= 1; i--)
            {
                cout << a[r - 1][i] << " ";
            }
            r--;
        }
        if (l < c)
        {
            for (i = r - 1; i >= k; i--)
            {
                cout << a[i][l] << " ";
            }
            l--;
        }
    }
}

int main()
{
    int a[row][col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    spiral(row, col, a);

    return 0;
}