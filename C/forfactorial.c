#include<stdio.h>
int main()
{
    int num1 , fac =1;
    printf("Enter The Number :");
    scanf("%d", &num1);
    for(int i =1; i<=num1; i++)
    {
        fac *=i;

    }
    printf("Factor of %d is %d", num1, fac);

    return 0;
}