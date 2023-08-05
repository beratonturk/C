#include <stdio.h>

int main()
{
    int j, b = 65, a = 90, p = 97, l = 122;
    char i;

    for (i = 'A'; i <= 'Z'; i++)
    {
        for (j = b; j <= a; j++)
        {
            printf("[%d-%c] ", j, i);

            b = b + 1;

            break;
        }
    }

    printf("\n");

    for (i = 'a'; i <= 'z'; i++)
    {
        for (j = p; j <= l; j++)
        {
            printf("[%d-%c] ", j, i);

            p = p + 1;

            break;
        }
    }

    return (0);
}