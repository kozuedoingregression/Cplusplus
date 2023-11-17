#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,key,pos,a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&key);
    scanf("%d",&pos);
    n++;

    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=key;

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}