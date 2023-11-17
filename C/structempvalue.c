#include <stdio.h>

struct employee
{
    char name[15];
    int code;
    int salary;
};
void emp(struct employee e1);
int main()
{
    struct employee e1;
    
    scanf("%s %d %d", &e1.name, &e1.code, &e1.salary);
    emp(e1);
}
void emp(struct employee e1)
{
    printf("%s %d %d", e1.name, e1.code, e1.salary);
}