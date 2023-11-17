#include<stdio.h>
int main()
{
    char s1[20],s2[20];
    int i, j=0,l=0;

    gets(s1);
    gets(s2);
    /*scanf("%[^/]s",s1);
    scanf("%[^/]s",s2);*/

    while (s1[l]!='\0')
    {
        l++;
    }

    while(s2[j]!='\0')
    {
        s1[l]=s2[j];
        j++;
        l++;
    }
    s1[l]='\0';

    puts(s1);
}