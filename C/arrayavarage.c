#include <stdio.h>
// WAP to find sum and average of n natural numbers in an array
int main()
{
    int n, sum = 0, avg = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    avg = sum / n;

    printf("%d\n", sum);
    printf("%d", avg);
}