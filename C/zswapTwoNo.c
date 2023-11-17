#include <stdio.h>
int main()
{
    // with third variable

    int num1, num2, temp;

    printf("Enter First Number :");
    scanf("%d", &num1);

    printf("Enter Second Number :");
    scanf("%d", &num2);

    temp = num1;

    num1 = num2;

    num2 = temp;

    printf("swap of teo numbers is :%d %d\n", num1, num2);

    // without third variable
    
    int num3 , num4 ;

    printf("Enter Third Number :");
    scanf("%d", &num3);

    printf("Enter Forth Number :");
    scanf("%d", &num4);

    num3= num3 + num4;
    num4 = num3 - num4;
    num3 = num3 - num4;

    printf("swap of two number is :%d %d",num3 , num4);

}