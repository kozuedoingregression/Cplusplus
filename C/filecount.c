/*WAp to that can read a file and count how many characters ,space ,tabs and newlines
are present*/
#include <stdio.h>
int main()
{
    FILE *ptr;
    char ch;
    int noc = 0, nol = 0, not = 0, nos = 0, sp = 0;

    ptr = fopen("test.txt", "r");

    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
            break;
        printf("%c",ch);
        noc++;
        if (ch == ' ')
            nos++;
        if (ch == '\n')
            nol++;
        if (ch == '\t')
            not ++;
    }
    fclose(ptr);

    sp = noc - (nos + not +nol);

    printf("\nNumber of characters =%d\n", sp);
    printf("Number of spaces = %d\n", nos);
    printf("Number of tabs = %d\n", not );
    printf("number of lines = %d\n", nol);
}