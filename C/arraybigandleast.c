#include <stdio.h>
// WAP to find biggest and least no. in an array
int main()
{
    int n, biggest, least;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    biggest = least = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > biggest)
        {
            biggest = arr[i];
        }
        if (arr[i] < least)
        {
            least = arr[i];
        }
    }
    printf("%d is biggest\n", biggest);
    printf("%d is least", least);
}