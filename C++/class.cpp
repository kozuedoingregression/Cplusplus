#include <bits/stdc++.h>
using namespace std;

class student
{
    string adress;

public:
    string name;
    int age;
    bool gender;

    void setadress(string a)
    {
        adress = a;
    }

    void printinfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
        cout << adress << endl;
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
        arr[i].setadress(s);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i].printinfo();
    }
}