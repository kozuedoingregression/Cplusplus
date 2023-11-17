#include <stdio.h>
int main()
{
    int num, prod, range, sum = 0;

    printf("Give Number :");
    scanf("%d", &num);
    printf("Enter Range :");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++) // 1 to 10
    {
        prod = num * i;
        sum += prod;
        printf("%d X %d = %d\n", num, i, prod);
    }
    
    printf("And sum is %d", sum);
}