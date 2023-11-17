#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    int *ptr,sum=0;
    float mean=0,sd=0;

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        ptr=&a[i];
        sum+=*ptr;
    }
    mean=(float)sum/n;

    for(i=0;i<n;i++)
    {
        sd+=pow(a[i]-mean,2);
    }
    printf("mean %.2f",mean);
    printf("sd %.2f",sqrt(sd/10));
}
