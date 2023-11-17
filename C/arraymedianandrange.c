/*Accept the set of N observations from the user. Write a UDF to find the median and range 
of the set of observations. Display the median and range in the calling program. 
Decide upon the appropriate data types for storage and calling mechanism. */
#include <stdio.h>
int main()
{
    int a,n, i, sum = 0,median ;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    if(n%2==0)//median even
    {
        printf("%d",arr[(n-1)/2]);
    }
    else//median odd
    {
       median= (arr[n/2]+arr[(n-1)/2])/2;
       printf("%d",median);
    }
    
    
}