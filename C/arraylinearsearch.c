#include<stdio.h>
//WAp to search an element in an array 
//using linear search and print it's index no.
int main()
{
    int n,key,idx;
    scanf("%d",&n);
    int arr[n];

    for(int i =0 ; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("%d",i);
        }
        idx=i;
    }
    if(idx==n)
    {
        printf("not found");
    }
}