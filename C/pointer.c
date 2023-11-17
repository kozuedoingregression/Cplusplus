#include<stdio.h>
int main()
{
    int a,*ptr;
    a=10;
    ptr=&a;

    printf("address of a is %d\n",&a);
    printf("address of ptr %d\n",&ptr);
    printf("value of a is %d\n",a);
    printf("value pointed by ptr is %d\n", *ptr);
    printf("value of ptr is %d\n", *(&ptr));


}