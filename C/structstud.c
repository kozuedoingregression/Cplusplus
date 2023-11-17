#include <stdio.h>
#pragma pack(1)
struct student
{
    char name[15];
    int roll_no;
    int age;
    char gender[7];
    int marks;
};
int main()
{
    int s;
    struct student s1;

    scanf("%s %d %d %s %d", &s1.name, &s1.roll_no, &s1.age, &s1.gender, &s1.marks);
    printf("%s %d %d %s %d\n", s1.name, s1.roll_no, s1.age, s1.gender, s1.marks);
    printf("%d", sizeof(s1));

}