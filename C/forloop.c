#include <stdio.h>
int main()
{
    int num;

    printf("Enter Range");
    scanf("%d", &num);

    for (int i = 0 ; i <= num ; i++)
    {
        printf("%d",i);
    }
}