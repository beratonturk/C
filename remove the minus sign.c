#include <stdio.h>

int abs_val(int);

int main()
{
    int uabs(int), x, result;

    printf("Input a value (negative): \n");
    scanf("%d", &x);

    printf("Original value = %d", x);

    result = abs_val(x);

    printf("\nAbsolute value = %d", result);

    return 0;
}

int abs_val(int y)
{
    if (y < 0)
    {
        return (y * -1);
    }

    else
    {
        return (y);
    }
}