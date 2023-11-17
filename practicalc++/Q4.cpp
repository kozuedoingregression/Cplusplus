#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string s1)
{

    string check = s1;

    reverse(check.begin(), check.end());

    if (s1 == check)
    {
        return "Yes string is palindrome";
    }
    else
    {

        return "No string is not palindrome";
    }
}
int main()
{
    string s1;

    cout<<"enter string ->";
    cin >> s1;
    cout << isPalindrome(s1);

    return 0;
}