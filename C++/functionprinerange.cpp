#include <iostream>
using namespace std;

void prime(int, int);

int main()
{
    int i, first, last;

    cin >> first >> last;

    prime(first, last);

    return 0;
}
void prime(int first, int last)
{

    int i, count = 0;

    int n = first;

    while (first != last)
    {
        for (i = 2; i <= first; i++)
        {
            if (first % i == 0)
            {
                break;
            }
        }
        if (first == i)
        {
            cout << first << " ";
            count++;
        }
        first++;
    }
    cout << endl
         << "there are " << count << " prime no. between " << n << " and " << last;
}