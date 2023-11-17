#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cin >> num1 >> num2;

    cout << "enter 1 to add" << endl;
    cout << "enter 2 to sub" << endl;
    cout << "enter 3 to multiply" << endl;
    cout << "enter 4 to div" << endl;

    int key;
    cin >> key;

    /*if (key == 1)
    {
        cout << num1 + num2 << endl;
    }
    else if (key == 2)
    {
        cout << num1 - num2 << endl;
    }
    else
    {
        cout << "not in menu" << endl;
    }*/

    switch (key)
    {
    case 3:
        cout << num1 * num2 << endl;
        break;
    case 4:
        cout<<float(num1/num2)<<endl;
        break;

    default:
        cout<<"not in menu"<<endl;
    }
}