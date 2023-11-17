#include <bits/stdc++.h>
using namespace std;

class student
{
    string address;

public:
    string name;
    int age;
    bool gender;

    void setaddress(string s)
    {
        address = s;
    }

    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    bool getgender()
    {
        return gender;
    }
    string getaddress()
    {
        return address;
    }
};

int main()
{
    int n;
    string s;
    cin >> n;
    student arr[n];
    

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name;
        cin >> arr[i].age;
        cin >> arr[i].gender;
        cin >> s;
        arr[i].setaddress(s);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].getname()<<" ";
        cout << arr[i].getage()<<" ";
        cout << arr[i].getgender()<<" ";
        cout << arr[i].getaddress()<<" ";
        cout<<endl;
    }

    return 0;
}