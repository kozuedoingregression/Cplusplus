/*Write a program to input a character and check if it is number , alphabet
or special character and display the message accordingly */

#include <stdio.h>
int main()
{
    int ch;

    printf("Enter a character :");
    scanf("%d", &ch);

    if (ch <= 57 && ch >= 48)
    {
        printf("%c is a number", ch);
    }
    else if (ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90)
    {
        printf("%c is an alphabet", ch);
    }
    else
    {
        printf("%c is a special character", ch);
    }

    return 0;
}