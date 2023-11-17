#include <stdio.h>
int main()
{
    int i = 0, skip = 5;

    while (i < 10)
    {
        printf("%d", i);
        i++;
        if (i != skip)
        {
            continue; // continue loop
        }
        else
        { 
            break; // break loop
        }
    }   
}