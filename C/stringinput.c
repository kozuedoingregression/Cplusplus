#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20], str3[40];
    int l1 = 0, l2, i=0, j=0;

    gets(str1);
    gets(str2);

    while(str1[i]!='\0')
    {
        str3[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        str3[j]=str2[i];
        i++;
        j++;
    }
    str3[j]='\0';

    puts(str3);

   
}