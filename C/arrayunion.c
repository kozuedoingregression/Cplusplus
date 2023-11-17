#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d", &n1);
    int a[n1];

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[n1+n2];
    int k=0;
        for (int i = 0; i < n1; i++)
        {
            c[i]=a[i];
            k++;
        }
        for(int i=0;i<n2;i++)
        {
            c[k]=b[i];
            k++;
        }
        
        for(int i=0;i<(n1+n2);i++)
        {
            if(c[i]==c[i+1])
            {
                c[i]=-1;
            }
        }
        
        for(int i=0;i<(n1+n2);i++)
        {
            if(c[i]!=-1)
           {
                printf("%d",c[i]);
           }
            
        }

    return 0;
}