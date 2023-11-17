// print n terms of fibenacci sequence (sum of two terms)
#include <iostream>
using namespace std;

void fibenacci(int);

int main()
{
    int n;

    cin >> n;

    fibenacci(n);

    return 0;
}
void fibenacci(int n)
{
    int t1 = 0, t2 = 1, nt, i;

    for (i = 0; i < n; i++)
    {
        cout << t1 << ",";
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }
    return;
}