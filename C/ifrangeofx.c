/*write a c program to calculate the value of f(x) if x has different ranges of value as given
f(x)= x^2 + 2 if 0 <= x <= 10
f(x)= x^2 + 2x if 11 <= x <=20
f(x)= x^3 + 2x2 if 21 <=x <=30
f(x)=0 if x >30
*/

#include <stdio.h>
int main()
{
    int x, fx;

    printf("Enter value of x from(0-30):");
    scanf("%d", &x);

    if (x >= 0 && x <= 10)
    {
        fx = (x * x) + 2;
        printf("Value of F(x) is %d  dor value of x = %d", fx, x);
    }
    else if (x >= 11 && x <= 20)
    {
        fx = (x * x) + (2 * x);
        printf("Value of F(x) is %d for value of x = %d", fx, x);
    }
    else if (x >= 21 && x <= 30)
    {
        fx = (x * x) + (2 * x * 2);
        printf("Value of F(x) is %d for value of x = %d", fx, x);
    }
    else if (x > 30)
    {
        printf("Out of Range");
    }
    else
    {
        printf("Invalid value of x");
    }

    return 0;
}
