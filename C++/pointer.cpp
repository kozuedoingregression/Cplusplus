#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int *ptr;
    ptr = &n;

    cout<<n<<endl;
    cout<<&n<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    *ptr=20;

    cout<<*ptr<<endl;

    return 0;
}