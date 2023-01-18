#include <stdio.h>

int main()
{
    int ndays, y, m, d;

    printf("Input no. of days: ");

    scanf("%d", &ndays);

    y = ndays / 365;

    m = (ndays % 365) / 30;

    d = ((ndays % 365) % 30);

    printf("%d Year(s) \n%d Month(s) \n%d Day(s)", y, m, d);

    return (0);
}