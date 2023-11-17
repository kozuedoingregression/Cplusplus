#include<stdio.h>
#pragma pack(1)

struct student
{
    int rollno;
    int age;
    char gender[1];
    int marks;
};

int main()
{
    int s;
    struct student s1;

    scanf("%d %d %c %d",&s1.rollno,&s1.age);
}