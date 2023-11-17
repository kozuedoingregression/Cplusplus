#include <iostream>
using namespace std;

void sortnum(int a[])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "sorted array is-> ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void searchnum(int a[])
{
    int key;
    cout << "enter element to search -> ";
    cin >> key;
    bool flag = 1;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == key)
        {
            cout << a[i] << "found" << endl;
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "element not found" << endl;
    }
}

void deletenum(int a[])
{
    int i, key, pos, size = 10;

    cout << "enter the position to delete -> ";
    cin >> pos;

    for (i = pos - 1; i < size; i++)
    {

        a[i] = a[i + 1];
    }

    size--;

    cout << "deleted : ";
    for (i = 0; i < size; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;
}

void updatenum(int a[])
{
    int check, key;
    cout << "enter element to update -> ";
    cin >> check;
    cout << "enter element to update with -> ";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == check)
        {
            a[i] = key;
        }
    }
    cout << " updated array is -> ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[10];

    cout << "enter 10 numbers->";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    sortnum(a);
    searchnum(a);
    deletenum(a);
    updatenum(a);
}