#include<stdio.h>
void comp(char [],char[]);
int main()
{
    char s1[20],s2[20];
    int i=0,j=0,l=0;

    gets(s1);
    gets(s2);

    comp(s1,s2);
}
void comp(char s1[],char s2[])
{
    int i=0,j=0,l1=0,l2=0;
    while(s1[l1]!='\0')
    {
        l1++;
    }
    while(s2[l2]!='\0')
    {
        l2++;
    } 
    if(l1!=l2)
    {
        printf("Not Equal");
    }
    
    
    
}