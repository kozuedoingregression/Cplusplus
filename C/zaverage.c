#include <stdio.h>
int main()
{
    int n1, n2, n3, avg;

    printf("take average of following numbers");

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    avg = (n1 + n2 + n3) / 3;

    printf("average of the following numbers are :%d", avg);

    return 0;
}