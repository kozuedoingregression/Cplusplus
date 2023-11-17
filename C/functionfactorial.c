#include <stdio.h>

int factorial(int num);

int main()
{   
    int fact;
    printf("Enter A Number :");
    scanf("%d", &fact);

    factorial(fact);

    printf("Factorial of %d is %d", fact , factorial(fact));

    return 0;
}
int factorial(int num)
{
    if (num ==1 || num ==0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num-1);
    }
}