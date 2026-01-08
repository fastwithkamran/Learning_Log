#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a word: ");
    scanf("%[^\n]", str);  

    for (i = 0; i < 100; i++)
    {
        if (str[i] == '\0')
            break;

        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;   
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;   
    }

    printf("\nConverted text: ");
    for (i = 0; i < 100; i++)
    {
        if (str[i] == '\0')
            break;
        printf("%c", str[i]);
    }

    return 0;
}
