#include<iostream>
#include<string>
using namespace std;

class employee
{
    public :
    string name;
    int id;
    string gender;
    int salary;

    void setname(string a)
    {
        name=a;
    }
    void setid(int b)
    {
        id=b;
    }
    void setgender(string c)
    {
        gender=c;
    }
    void setsalary(int d)
    {
        salary=d;
    }



};

int main()
{
    employee e1,e2;

    e1.setname("shashank thapa");
    e1.setgender("male");
    e2.setid(12432);
    e2.setsalary(80000);


    return 0;
}