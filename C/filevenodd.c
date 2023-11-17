#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("num.txt","r+");
    int i,n;
    for(i=0;i<50;i++)
    {
        scanf("%d",&n);
        putw(n,ptr);
    }
}