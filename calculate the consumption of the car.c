#include <stdio.h>

int main()
{
    int x;
    float y;

    printf("\nInput total distance in km: ");
    scanf("%d", &x);

    printf("\nInput total fuel spent in liters: ");
    scanf("%f", &y);

    printf("\nAverage consumption (km/lt) %.3f \n", x / y);

    return (0);
}