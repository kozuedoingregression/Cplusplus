#include <stdio.h>

int area(int num1);

int main()
{
    int num1, area1;

    printf("Enter the sides of square:");
    scanf("%d", &num1);

    area1 = area(num1);
    printf("Area of Square is %d", area1);

    return 0;
}

int area(int num1)
{
    int side = 0;
    side = num1 * num1;
    return side;
}