#include <stdio.h>

int main()
{
    int numbers[5];
    int j, pctr = 0, nctr = 0;

    printf("\nInput the first number: ");
    scanf("%d", &numbers[0]);

    printf("\nInput the second number: ");
    scanf("%d", &numbers[1]);

    printf("\nInput the third number: ");
    scanf("%d", &numbers[2]);

    printf("\nInput the fourth number: ");
    scanf("%d", &numbers[3]);

    printf("\nInput the fifth number: ");
    scanf("%d", &numbers[4]);

    for (j = 0; j < 5; j++)
    {
        if (numbers[j] > 0)
        {
            pctr++;
        }
        else if (numbers[j] < 0)
        {
            nctr++;
        }
    }

    printf("\nNumber of positive numbers: %d", pctr);

    printf("\nNumber of negative numbers: %d", nctr);

    printf("\n");

    return (0);
}