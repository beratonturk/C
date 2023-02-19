#include <stdio.h>

int main()
{
    int x, y;
    int div_result;

    printf("Input two numbers: ");

    printf("\nx: ");

    scanf("%d", &x);

    printf("y: ");

    scanf("%d", &y);

    if (y != 0)
    {
        div_result = x / y;
        printf("%d\n", div_result);
    }

    else
    {
        printf("Division not possible.\n");
    }

    return (0);
}