#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int l,i,count =0;

    gets(str);
    l= strlen(str);

    for(i=0;i<l;i++)
    {
        if(str[i]>=33 && str[i]<=34 || str[i]==39 && str[i]>=44 || str[i]<=59 && str[i]>=63 || str[i]>=123 &&str[i]<=126)
        { 
            count ++;
            str[i]='$';
        }
    }
    puts(str);
    printf("%d",count);
}