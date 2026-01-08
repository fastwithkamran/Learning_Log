#include <stdio.h>

int main()
{
    int i, j;

    // upper part
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5 - i; j++)
            printf(" ");
        for(j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    // lower part
    for(i = 3; i >= 0; i--)
    {
        for(j = 0; j < 5 - i; j++)
            printf(" ");
        for(j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
