#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    srand(time(NULL));

    for (i = 1; i < 10; i++)
    {
        printf("%d\n", (rand() % 50));
    }

    return (0);
}