#include <stdio.h>

int main()
{
    int i, j, n, sum_int = 0;

    printf("Input a positive number less than 100: ");
    scanf("%d", &n);

    if (n < 1 || n >= 100)
    {
        printf("Wrong input\n");

        return 0;
    }

    j = 1;

    for (i = 1; j <= n; i++)
    {
        sum_int += j * j * j * j;
        j += i;
    }

    printf("\nSum of the series is %d\n", sum_int);

    return (0);
}