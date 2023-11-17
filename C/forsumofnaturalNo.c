#include <stdio.h>
int main()
{
    int num, sum = 0;

    printf("Enter Range :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural number is %d", num, sum);
}