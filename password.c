#include <stdio.h>
#define password 1234

int main()
{
    int pass;

    printf("\nInput the password: ");
    scanf("%d", &pass);

    if (pass == password)
    {
        printf("Correct password");
    }

    else
    {
        printf("Wrong password, try another");
    }

    return (0);
}