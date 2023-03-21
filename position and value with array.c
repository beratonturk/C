#include <stdio.h>

int main()
{
    int N[5], i;

    printf("Input the 5 members of the array:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &N[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (N[i] < 5)
        {
            printf("\nA[%d] = %d\n", i, N[i]);
        }
    }

    return (0);
}