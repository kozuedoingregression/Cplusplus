#include <stdio.h>
// WAP to count no. of even and odd elements in an array
int main()
{
    int n, even_count = 0, odd_count = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("%d numbers are even\n", even_count);
    printf("%d numbers are odd", odd_count);
}