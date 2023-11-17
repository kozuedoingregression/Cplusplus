#include <stdio.h>
// WAP to count no. greater than, smaller than or equal to a number in array
int main()
{
    int n, key, idx = 0, greater = 0, lesser = 0, equal = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            idx = i;
            for (int i = 0; i < n; i++)
            {
                if (arr[idx] < arr[i])
                {
                    greater++;
                }
                if (arr[idx] > arr[i])
                {
                    lesser++;
                }
                if (arr[idx] == arr[i])
                {
                    equal++;
                }
            }
        }
    }
    printf("%d number is greater than %d\n", greater, arr[idx]);
    printf("%d number is lesser than %d\n", lesser, arr[idx]);
    printf("%d number is equal to %d\n", equal, arr[idx]);
}