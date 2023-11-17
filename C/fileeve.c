#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p, *v;
    p = fopen("sample.txt", "r");
    v = fopen("value.txt", "r");
    if (v == NULL || p == NULL)
    {
        printf("File NOT found.\n");
        exit(0);
    }
    else
    {
        int t;
        char c[200];
        // fprintf(p,"%s","Hyperkid is JoDD.\n");
        while (fscanf(p, "%[^\n]s", c) != EOF)
        {
            /* code */
            // printf("%s", c);
            puts(c);
        }

        printf("Enter number of char :\n");
        scanf("%d", &t);
        while ((c=getchar())!=EOF)
        {

            scanf("%c",&c);
            if (*c == 'a')
                // fputc(c,p);
                fprintf(v, "%c", c);
            /* code */
            else
                fputc(c,v);
        }
    }

    printf("DONE.\n");
    fclose(p);
    fclose(v);
    return 0;
}