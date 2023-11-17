#include<bits/stdc++.h>
using namespace std;
class student
{
    string name;
    int age;
    string sec;
    public:
    student()
    {}
    student(string a,int b,string c)
    {
        name=a;
        age=b;
        sec=c;
    }
    friend student operator -(student s1,student s2);
    void show()
    {
        cout<<age;
    }
};
student operator -(student s1,student s2)
{
    student s3;
    s3.age=s1.age-s2.age;
    return s3;
}
main()
{
    student n("dikshant",12,"d");
     student m("keya",11,"d");
     student x=operator -(n,m);
     x.show();


}