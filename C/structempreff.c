#include <stdio.h>

struct employee
{
    char name[15];
    int code;
    int salary;
};
void emp(struct employee *a);
int main()
{
    struct employee *ptr;
    struct employee e1;
    scanf("%s %d %d", &e1.name, &e1.code, &e1.salary);
    ptr = &e1;
    emp(ptr);
}
void emp(struct employee *a)
{
    printf("%s %d %d", a->name, a->code, a->salary);
}