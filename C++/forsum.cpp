#include <iostream>
using namespace std;

int main()
{
    int n, num, sum = 0,con=0;

    cin >> n;
    int i,j;
    for (i = 0; i < n; i++)
    {   
        cin >> num;

        for(j=1; j<i;j++)
        {
            con=num*num;
        }
        
        sum += num;
    }
    cout << sum << endl;
}