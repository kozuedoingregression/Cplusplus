#include<stdio.h>
int main()
{
    char s1[20];
    int i=0,j=0,l=0,temp;

    gets(s1);

    while(s1[l]!='\0')
    {
        l++;
    }

    for(i=0;i<l/2;i++)
    {
        temp =s1[i];
        s1[i]=s1[l-i-1];
        s1[l-i-1]=temp;
    }
    puts(s1);
}