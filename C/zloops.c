#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter First Number :");
    scanf("%d", &num1);
    printf("Enter Second Number :");
    scanf("%d", &num2);

    printf("sum is %d\n", num1 + num2); // int int = int

    printf("Sum of 6 + 5.6 is %f\n", 6 + 5.6); // int float = float

    int k = 3.0 / 9; // int float = float
    printf("%f\n", k);

    // Do while loop
    int i = 1;

    printf("Number 1 to 4\n");
    do
    {
        printf("%d\n", i);
        i++;

    } while (i <= 4);

    // print in reverse
    printf("Reverse order");
    for (int x = 10; x; x--)
    {
        printf("%d\n", x);
    }

    // break in loop

    while (i < 10)
    {
        printf("%d", i);
        i++;
        if (i == 5)
        {
            break;
        }
    }
}