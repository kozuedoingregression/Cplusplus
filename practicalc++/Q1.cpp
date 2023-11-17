#include <iostream>
using namespace std;

int main()
{
    string s1;

    cout<<"enter string -> ";
    cin >> s1;

    int len;
    len = s1.size();

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (s1[j] > s1[j + 1])
            {
                int temp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = temp;
            }
        }
    }
    cout<<"sorted string is -> "; 
    cout << s1 << endl;
}