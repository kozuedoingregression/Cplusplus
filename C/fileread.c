#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * p,*q,*r;
    char ch,a,b,c;
    
    p=fopen("test.txt","w+");
    q=fopen("vowels.txt","w+");
    r=fopen("conso.txt","w+");

    /*while(1)
    {
        ch=getchar();
        if(ch == EOF)
        break;
    
        fputc(ch,p);
    }*/

    while(1)
    {
        a=fgetc(p);
        if(a == EOF)
        break;
        
        if(a=='e'|| a=='i'||a=='o'||a=='u'||a=='a')
        {
            fputc(a,q);
        }
        else
        {
            fputc(a,r);
        }
        
        
    }
    fclose(p);
    fclose(q);
    fclose(r);
}