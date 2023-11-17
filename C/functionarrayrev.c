#include<stdio.h>
void rev(int [],int n);

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    int i;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    rev(a,n);

}
void rev(int a[],int n)
{
    int i;

    for(i=n-1;i>=0;i--)
    {
       printf("%d",a[i]);
    }
}