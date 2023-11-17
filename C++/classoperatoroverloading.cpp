#include <bits/stdc++.h>
using namespace std;

class student
{
    int sid;

public:
    string name;
    int age;
    bool gender;

    void setsid(int id)
    {
        sid = id;
    }
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    int getsid()
    {
        return sid;
    }
    bool getgender()
    {
        return gender;
    }

    // student(string na,int id,int ag,bool gen)
    // {
    //     name=na;
    //     sid=id;
    //     age=ag;
    //     gender=gen;
    // }

    bool operator == (student &a)
    {
        if (name == a.name &&age == a.age &&sid == a.sid &&gender == a.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int n, id;
    cin >> n;

    student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name;
        cin >> id;
        arr[i].setsid(id);
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].getname() << " ";
        cout << arr[i].getsid() << " ";
        cout << arr[i].getage() << " ";
        cout << arr[i].getgender() << " ";
        cout << endl;
    }

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout<<"same"<<endl;
        }
        else
        {
            cout<<"not same"<<endl;
        }
    }
}