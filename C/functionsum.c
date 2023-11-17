#include <stdio.h>
/* sum is a function which takes a and b input and
returns an integer as an output */
int sum(int num1, int num2);   // function prototype declaration
int pro(int num1, int num2);   // function prototype declaration
int sub(int num1, int num2);   // function prototype declaration
float div(int num1, int num2); // function prototype declaration
int range(int ran);
int main()
{
    int num1, num2, sum1 = 0, pro1 = 0, sub1 = 0, ran = 0, ran1 = 0;
    float div1;

    printf("Enter First number:");
    scanf("%d", &num1);
    printf("Enter Second Number:");
    scanf("%d", &num2);
    printf("Enter range:");
    scanf("%d", &ran);

    sum1 = sum(num1, num2); // function cell
    pro1 = pro(num1, num2); // function cell
    div1 = div(num1, num2); // function cell
    sub1 = sub(num1, num2); // function cell
    ran1 = range(ran);
    printf("Sum is %d\n", sum1);
    printf("Product is %d\n", pro1);
    printf("Division is %f\n", div1);
    printf("Subtraction is %d\n", sub1);
    printf("%d", ran1);
    return 0;
}
// function definition
int sum(int num1, int num2)
{
    int sum = 0;
    sum = num1 + num2;
    return sum;
}   
int pro(int num1, int num2)
{
    int pro = 0;
    pro = num1 * num2;
    return pro;
}
int sub(int num1, int num2)
{
    int sub = 0;
    sub = num1 - num2;
    return sub;
}
float div(int num1, int num2)
{
    float div = 0;
    div = (float)num1 / num2;
    return div;
}
int range(int ran)
{
    int i = 0;
    while (i <= ran)
    {
        printf("%d", i);
        i++;
    }
}
