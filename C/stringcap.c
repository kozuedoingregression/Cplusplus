#include<stdio.h>
#include<string.h>

int main()
{
    char str;
    int i;

    scanf("%[^/]s",&str);

    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        {
            strupr(str[i]);
        }
    }
    puts(str);
}