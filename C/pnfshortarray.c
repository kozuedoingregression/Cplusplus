#include<stdio.h>
void shor(int [],int );
void display(int [], int);

int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    shor(a,n);
    display(a,n);

}
void shor(int a[],int n)
{
    int j,i,temp=0;
    for(i=0;i<n-1;i++)
    {   for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}