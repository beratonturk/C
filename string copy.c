#include <stdio.h>

int main()
{
    char str1[20], str2[20];
    int i;

    printf("Input a string: ");
    scanf("%s", str2);

    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }

    str1[i] = '\0';

    printf("\n");

    printf("Original string: %s", str1);

    printf("\nNumber of characters = %d\n", i);

    return 0;
}