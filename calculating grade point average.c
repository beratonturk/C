#include <stdio.h>

int main()
{
    int notes[10], i, number, total = 0, f = 0, result;

    printf("How many exams did you take ? : ");
    scanf("%d", &number);
    printf("Please enter your notes :\n");

    for (i = 0; i < number; i++)
    {
        f++;
        scanf("%d", &notes[i]);
        total += notes[i];
    }

    result = total / f;

    printf("\nYour grade point average : %d\n", result);

    return (0);
}